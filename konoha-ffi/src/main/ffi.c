/****************************************************************************
 * KONOHA COPYRIGHT, LICENSE NOTICE, AND DISCRIMER
 *
 * Copyright (c) 2006-2011, Kimio Kuramitsu <kimio at ynu.ac.jp>
 *           (c) 2008-      Konoha Team konohaken@googlegroups.com
 * All rights reserved.
 *
 * You may choose one of the following two licenses when you use konoha.
 * If you want to use the latter license, please contact us.
 *
 * (1) GNU General Public License 3.0 (with K_UNDER_GPL)
 * (2) Konoha Non-Disclosure License 1.0
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* ************************************************************************ */

#include"commons.h"

/* ************************************************************************ */

#ifdef __cplusplus
extern "C" {
#endif

#ifdef K_USING_FFIDSL
#include <unistd.h>
#include <ffi/ffi.h>
#ifndef K_USING_MINGW
#include <sys/mman.h>
#endif

	
/* 
 * Contributors
 *  Shinpei Nakata <shinpei.nakata(at)gmail.com>
 */

/* ------------------------------------------------------------------------ */
// Memory allocation
// xmalloc freelist. each size is 
#define XBLOCK_SIZE (128)
#define XBLOCK_PAGESIZE (sysconf(_SC_PAGESIZE))
#define XBLOCK_NUMBER (XBLOCK_PAGESIZE / XBLOCK_SIZE)

#define XMEM_TOTAL_SIZE (1024 * 64)
	
typedef struct knh_xmem_allocator {
	void *root;
	size_t totalSize;
	size_t usedSize;
	void *freelist;
} knh_xmem_allocator;

static knh_xmem_allocator g_xmem_allocator = {0};

static void initXmemAllocator(CTX ctx)
{
	knh_xmem_allocator *xalc = &g_xmem_allocator;
	void *ptr = (void *)KNH_VALLOC(ctx, XMEM_TOTAL_SIZE);
	int mret = mprotect(ptr, XMEM_TOTAL_SIZE, PROT_READ | PROT_WRITE | PROT_EXEC);
	if (mret != -1) {
		xalc->root = ptr;
		xalc->totalSize = XMEM_TOTAL_SIZE;
		xalc->usedSize = 0;
		xalc->freelist = ptr;
	}
}

#define XMEM_IS_PROPSIZE(size) (size <= XMEM_TOTAL_SIZE)
#define XMEM_DOES_FIT(xalc, size) 	(size <= (xalc->totalSize - xalc->usedSize))
	
void *knh_xmalloc(CTX ctx, size_t size)
{
	KNH_ASSERT(size >= 0);
	knh_xmem_allocator *xalc = &g_xmem_allocator;
	if (unlikely(xalc->totalSize == 0)) {
		initXmemAllocator(ctx);
	}
	if (XMEM_IS_PROPSIZE(size)) {
		if (XMEM_DOES_FIT(xalc, size)) {
			// It fits.
			xalc->usedSize += size;
			void *ptr = xalc->freelist;
			xalc->freelist += size;
			return ptr;
		}
	}
	fprintf(stderr,
			"Reach the limit allocation for executable memory!!\n"
			"You're using:%dbytes, and allocating additional %dbytes\n", xalc->usedSize, size); 
	return NULL;
}

static inline void knh_xfree(CTX ctx, void* block, size_t size)
{
	knh_vfree(ctx, block, size);
}

typedef struct knh_xblock_t {
	unsigned char *block;
	struct knh_xblock_t *next;
} knh_xblock_t;

static knh_xblock_t* xfreelist = NULL;

static void* get_unused_xblock(CTX ctx)
{
	if (unlikely(xfreelist == NULL)) {
		unsigned char *xmem = (unsigned char*)knh_xmalloc(ctx, 1);
		assert(xmem != NULL);
		knh_xblock_t *p = (knh_xblock_t*)knh_malloc(ctx, XBLOCK_NUMBER * sizeof(knh_xblock_t));
		size_t idx = 0;
		for (idx = 0; idx < XBLOCK_NUMBER - 1; idx++) {
			p[idx].block = &(xmem[idx * XBLOCK_SIZE]);
			p[idx].next = &(p[idx + 1]);
			//			fprintf(stderr, "idx:%d, p:%p, block:%p, next:%p\n", idx, &(p[idx]), p[idx].block, p[idx].next);
		}
		p[idx].block = &(xmem[idx * XBLOCK_SIZE]);
		p[idx].next = NULL;
		xfreelist = p;
	}
	if (xfreelist->next == NULL) {
		unsigned char *xmem = (unsigned char*)knh_xmalloc(ctx, 1);
		knh_xblock_t *p = (knh_xblock_t*)knh_malloc(ctx, XBLOCK_NUMBER * sizeof(knh_xblock_t));
		size_t idx = 0;
		for (idx = 0; idx < XBLOCK_NUMBER - 1; idx++) {
			p[idx].block = &(xmem[idx * XBLOCK_SIZE]);
			p[idx].next = &(p[idx + 1]);
		}
		p[idx].block = &(xmem[idx * XBLOCK_SIZE]);
		p[idx].next = NULL;
		xfreelist->next = p;
	}
	assert(xfreelist->next != NULL);
	knh_xblock_t *ret = xfreelist;
	xfreelist = ret->next;
	return ret;
}

static knh_xblock_t *knh_generateWrapper(CTX ctx, void *callee, int argc, knh_ffiparam_t *argv)
{
  knh_xblock_t *blk = get_unused_xblock(ctx);
  knh_xblock_t *function = blk->block;

  size_t fidx = 0;
  int i = 0;
  knh_ffiparam_t *t;
  // local ffiarguments;
  ffi_cif *cif = (ffi_cif*)KNH_MALLOC(ctx, sizeof(ffi_cif));
  ffi_type **args = (ffi_type**)KNH_MALLOC(ctx, sizeof(ffi_type) * argc);
  void *values[1];
  
  for (i = 0; i < argc; i++) {
	t = &argv[i];
	if (t->sfpidx != -1) {
	  // it means arguments	
	  switch(t->type) {
	  case CLASS_Tvoid:
		// do nothing
		break;
	  case CLASS_Int:
		args[i] = &ffi_type_uint64;
		break;
	  case CLASS_Float:
		args[i] = &ffi_type_double;
		break;
	  default:
		args[i] = &ffi_type_pointer;
		break;
	  }
	}
  }

  if (ffi_prep_cif(cif, FFI_DEFAULT_ABI, argc,
				   &ffi_type_void, args) == FFI_OK) {
	fprintf(stderr, "OKAY!\n");
  } else {
	fprintf(stderr, "this is not okay!\n");
  }

}



//typedef struct {
//	knh_type_t type;
//	knh_short_t sfpidx;
//	void *conv_func;
//} knh_ffiparam_t;  // for ffi
// sfp: -1 --> return
// sfp: 1+ --> arguments

#define FUNC_SIZE (256)


void* knh_copyCallbackFunc(CTX ctx, void *func, knh_Func_t *fo)
{
  void *f = NULL;
#if !defined(K_USING_WINDOWS) && !defined(K_USING_BTRON)
  f = (void*)(knh_uchar_t*)knh_xmalloc(ctx, FUNC_SIZE);
  int i, marker = -1;
  for (i = 0; i < FUNC_SIZE; i++) {
	if (*(int*)&f[i] == -1) {
	  marker = i;
	  i += 3;
	}
  }
#endif
  return f;
}
static void bough_dumpBinary(unsigned char *ptr, size_t size)
{
	int i = 0;
	unsigned char byte;
	for (i = 0; i < size; i++) {
		byte = ptr[i];
		fprintf(stderr, "%02x ", byte);
		if (i % 16 == 15) fprintf(stderr, "\n");
	}
}

#endif/*K_USING_FFIDSL*/

knh_Fmethod knh_makeFmethod(CTX ctx, void *func, int argc, knh_ffiparam_t *argv)
{
#ifdef K_USING_FFIDSL
//	void *f = knh_generateWrapper(ctx, (void*)func, argc, argv);
	knh_xblock_t* blk = knh_generateWrapper(ctx, (void*)func, argc, argv);
	void *f = blk->block;
	if (f != NULL) {
		//		bough_dumpBinary(f, 128);
		return (void*)f;
	}
#endif
	return NULL; /* if FAILED */
}

/* ------------------------------------------------------------------------ */

#ifdef __cplusplus
}
#endif
