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

//#define USE_STEXT 1
#define USE_bytes_first       1
#define USE_bytes_index       1
//#define USE_bytes_last        1
//#define USE_bytes_indexOf     1
//#define USE_bytes_startsWith  1
//#define USE_cwb_open      1
//#define USE_cwb_tobytes   1

#include"commons.h"

/* ************************************************************************ */

#ifdef __cplusplus
extern "C" {
#endif

/* ------------------------------------------------------------------------ */

knh_sfp_t* knh_stack_initexpand(CTX ctx, knh_sfp_t *sfp, size_t n)
{
	knh_context_t *ctxo = (knh_context_t*)ctx;
	size_t i, s;
	if(sfp == NULL) {
		DBG_ASSERT(ctxo->stacksize == 0);
		s = 0;
		ctxo->stacksize = n;
		ctxo->stack = (knh_sfp_t*)KNH_MALLOC(ctx, sizeof(knh_sfp_t) * ctxo->stacksize);
		ctxo->esp = ctxo->stack;
		ctxo->mtdcache = (knh_mtdcache_t*)KNH_MALLOC(ctx, K_MTDCACHE_SIZE * sizeof(knh_mtdcache_t));
		knh_bzero(ctxo->mtdcache, K_MTDCACHE_SIZE * sizeof(knh_mtdcache_t));
		ctxo->tmrcache = (knh_tmrcache_t*)KNH_MALLOC(ctx, K_TMAPCACHE_SIZE * sizeof(knh_tmrcache_t));
		knh_bzero(ctxo->tmrcache, K_TMAPCACHE_SIZE * sizeof(knh_tmrcache_t));
		KNH_INITv(ctxo->bufa, new_Bytes(ctx, "cwbbuf", K_PAGESIZE * 4));
		KNH_INITv(ctxo->bufw, new_BytesOutputStream(ctx, ctxo->bufa));
	}
	else {
		knh_sfp_t **cstack_top = &sfp;
		knh_sfp_t *oldstack = ctxo->stack;
		size_t espidx = (ctxo->esp - ctxo->stack);
		size_t size = ctxo->stacksize, newsize = ctxo->stacksize * 2;
		if(newsize < size + n) newsize = size + n;
#ifdef K_USING_LINUX_
		/* TODO stack rewriting may not work on Linux */
		KNH_TODO("stack rewriting");
#endif
		// Don't use realloc
		ctxo->stack = (knh_sfp_t*)KNH_MALLOC(ctx, newsize*sizeof(knh_sfp_t));
		knh_memcpy(ctxo->stack, oldstack, size*sizeof(knh_sfp_t));
		KNH_MEMINFO(ctx, "realloc ctx->stack oldsize=%d, newsize=%d, oldblock=(%p,%p) newblock=(%p,%p)",
			(int)size, (int)newsize, oldstack, oldstack+size, ctxo->stack, ctxo->stack+newsize);
		if(oldstack != ctxo->stack) {
			knh_sfp_t **p = (knh_sfp_t**)ctxo->cstack_bottom;
			if(!(ctxo->cstack_bottom < (void*)cstack_top)) {
				p = cstack_top;
				cstack_top = (knh_sfp_t**)ctxo->cstack_bottom;
			}
			while(p <= cstack_top) {
				knh_uintptr_t addr = (knh_uintptr_t)p[0];
				if((oldstack<= p[0] && p[0] < oldstack + size) && addr % sizeof(void*) == 0) {
					knh_sfp_t *newsfp = p[0] + (ctxo->stack - oldstack);
					KNH_ASSERT(ctxo->stack <= newsfp && newsfp < ctxo->stack + size);
					//DBG_P("addr=%lld, sfp=%p[%d] => %p[%d]", (knh_int_t)(addr % sizeof(void*)), p[0], (int)(p[0]->ivalue), newsfp, (int)newsfp->ivalue);
					KNH_ASSERT((p[0])->ndata == newsfp->ndata);
					p[0] = newsfp;
				}
				p++;
			}
		}
		ctxo->stacksize = newsize;
		ctxo->esp = ctxo->stack + espidx;
		KNH_FREE(ctx, oldstack, size*sizeof(knh_sfp_t));
		s = size;
	}
	for(i = s; i < ctxo->stacksize; i++) {
		KNH_INITv(ctxo->stack[i].o, KNH_NULL);
		ctxo->stack[i].ndata = 0;
	}
	ctxo->stacktop = ctxo->stack + (ctxo->stacksize - K_GAMMAMAX);
	return sfp;
}

/* ------------------------------------------------------------------------ */

void knh_stack_clear(CTX ctx, knh_sfp_t *sfp)
{
	if(!(ctx->stack <= sfp && sfp < ctx->stacktop)) {
		sfp = ctx->stack; // sometimes, rewriting pointer is failed.
	}
	while(sfp < ctx->stack + ctx->stacksize) {
		KNH_SETv(ctx, sfp[0].o, KNH_NULL);
		sfp[0].ndata = 0;
		sfp++;
	}
}

/* ------------------------------------------------------------------------ */

knh_sfp_t* knh_stack_local(CTX ctx, size_t n)
{
	long remaining = ctx->stacksize - ((ctx->esp - ctx->stack) + (n + 64));
	if(remaining < 0) {
		DBG_P("LACK OF STACK: stacksize=%d, remaining=%d", ctx->stacksize , remaining);
		knh_stack_initexpand(ctx, ctx->esp, ctx->stacksize + n + 64);
	}
	knh_sfp_t *esp = ctx->esp;
	((knh_context_t*)ctx)->esp = esp + n;
	return esp;
}

void knh_stack_gc(CTX ctx, int isALL)
{
	knh_sfp_t *sp = ctx->esp + 1;  // for safety
	knh_Object_t *nullobj = KNH_NULL;
	if(isALL) {
		knh_sfp_t *stacktop = ctx->stack + ctx->stacksize;
		while(sp < stacktop) {
			KNH_SETv(ctx, sp[0].o, nullobj);
			sp++;
		}
	}
	else {
		while(sp < ctx->stacktop) {
			//DBG_P("stack[%d] o=%s", sp - ctx->stack, CLASS__(O_cid(sp[0].o)));
			if(sp[0].o == nullobj) break;
			KNH_SETv(ctx, sp[0].o, nullobj);
			sp++;
		}
	}
	// USE END_LOCAL_NONGC in the middle of the context initialization
	KNH_ASSERT(ctx->e != NULL);
	KNH_GC(ctx);
}


/* ------------------------------------------------------------------------ */
/* [call] */

void knh_stack_typecheck(CTX ctx, knh_sfp_t *sfp, knh_Method_t *mtd, knh_opline_t *pc)
{
	knh_class_t this_cid = O_cid(sfp[0].o);
	int i, argc;
	DBG_ASSERT(IS_Method(sfp[K_MTDIDX].mtdNC));
	argc = ParamArray_isVARGs(DP(mtd)->mp) ? (ctx->esp - sfp) : knh_Method_psize(mtd);
	for(i = 1; i < argc; i++) {
		knh_type_t reqt = knh_Method_ptype(ctx, mtd, this_cid, i - 1);
		const knh_ClassTBL_t *t = O_cTBL(sfp[i].o);
		if(!ClassTBL_isa(t, reqt)) {
			THROW_ParamTypeError(ctx, sfp, (mtd)->mn, i, reqt, O_cid(sfp[i].o));
			break;
		}
	}
	return;
}


///* ------------------------------------------------------------------------ */
//
//KNHAPI2(void) konoha_throwSecurityException(void)
//{
//	CTX ctx = knh_getCurrentContext();
//	knh_stack_throw(ctx, new_Exception(ctx, knh_getEventName(ctx, EVENT_Security)), NULL, 0);
//}


/* ------------------------------------------------------------------------ */
/* [Event] */

int event_isa(CTX ctx, knh_event_t eid, knh_event_t parent)
{
	ASSERT_ebi(eid);
	DBG_ASSERT(parent <= ctx->share->sizeEventTBL);
	if(eid == parent || parent == EVENT_Exception) return 1;
	while((eid = ctx->share->EventTBL[eid].parent) != EVENT_Exception) {
		if(eid == parent) return 1;
	}
	return 0;
}

/* ------------------------------------------------------------------------ */

knh_String_t *knh_getEventName(CTX ctx, knh_event_t eid)
{
	ASSERT_ebi(eid);
	return ctx->share->EventTBL[eid-1].name;
}

/* ------------------------------------------------------------------------ */
/* [TABLE] */

knh_event_t knh_addEvent(CTX ctx, knh_flag_t flag, knh_String_t *name, knh_class_t peid)
{
	knh_event_t eid = 0;
	OLD_LOCK(ctx, LOCK_SYSTBL, NULL);
	if(ctx->share->sizeEventTBL == ctx->share->capacityEventTBL) {
		knh_expandEventTBL(ctx);
	}
	eid = ctx->share->sizeEventTBL;
	((knh_share_t*)ctx->share)->sizeEventTBL += 1;
	OLD_UNLOCK(ctx, LOCK_SYSTBL, NULL);

	{
		knh_EventTBL_t *et = pEventTBL(eid);
		DBG_ASSERT(et->name == NULL);
		et->flag = flag;
		et->parent = peid;
		KNH_INITv(et->name, name);
		DBG_P("eid=%d, name='%s'", eid, S_tochar(name));
		OLD_LOCK(ctx, LOCK_SYSTBL, NULL);
		knh_DictSet_set(ctx, DP(ctx->sys)->EventDictCaseSet, name, eid+1);
		OLD_UNLOCK(ctx, LOCK_SYSTBL, NULL);
	}
	return eid;
}

knh_bool_t knh_isDefinedEvent(CTX ctx, knh_bytes_t t)
{
	int eid;
	knh_intptr_t loc = knh_bytes_index(t, '!');
	if(loc != -1) {
		t = knh_bytes_first(t, loc);
	}
	OLD_LOCK(ctx, LOCK_SYSTBL, NULL);
	eid = (knh_event_t)knh_DictSet_get(ctx, DP(ctx->sys)->EventDictCaseSet, t);
	OLD_UNLOCK(ctx, LOCK_SYSTBL, NULL);
	return eid;
}

knh_event_t knh_geteid(CTX ctx, knh_bytes_t t)
{
	knh_event_t eid = EVENT_Exception;
	knh_intptr_t loc = knh_bytes_index(t, '!');
	if(loc != -1) {
		t = knh_bytes_first(t, loc);
	}
	OLD_LOCK(ctx, LOCK_SYSTBL, NULL);
	eid = (knh_event_t)knh_DictSet_get(ctx, DP(ctx->sys)->EventDictCaseSet, t);
	DBG_P("@@@@ '%s' is %d", t.text, eid);
	OLD_UNLOCK(ctx, LOCK_SYSTBL, NULL);
	if(eid == 0) {
		return knh_addEvent(ctx, 0, new_S(ctx, t), EVENT_Exception);
	}
	else {
		return eid - 1;
	}
}


/* ------------------------------------------------------------------------ */
/* [Exception.new] */

knh_Exception_t* new_Error(CTX ctx, knh_String_t *emsg)
{
	knh_Exception_t* e = new_(Exception);
	KNH_SETv(ctx, e->emsg, emsg);
	return e;
}

void CTX_setThrowingException(CTX ctx, knh_Exception_t *e)
{
	KNH_SETv(ctx, ((knh_context_t*)ctx)->e, e);
}

knh_bool_t isCATCH(CTX ctx, knh_rbp_t *rbp, int en, knh_event_t peid)
{
	knh_Exception_t *e = ctx->e;
	knh_event_t eid = knh_geteid(ctx, S_tobytes(e->emsg));
	int res = event_isa(ctx, eid, peid);
	if(res == 1) {
		KNH_SETv(ctx, rbp[en].o, e);
		KNH_SETv(ctx, ((knh_context_t*)ctx)->e, KNH_NULL);
	}
	return res;
}

void Context_push(CTX ctx, knh_Object_t *o)
{
	knh_Array_t *a = ctx->ehdrNC->stacklist;
	knh_Array_add(ctx, a, o);
}

knh_Object_t *Context_pop(CTX ctx)
{
	knh_Array_t *a = ctx->ehdrNC->stacklist;
	DBG_ASSERT(a->size > 0);
	a->size -= 1;
	{
		knh_Object_t *o = a->list[a->size];
		KNH_FINALv(ctx, a->list[a->size]);
		return o;
	}
}

/* ------------------------------------------------------------------------ */

#ifndef K_USING_SETJMP_

#if defined(__i386__)
#define reg(r) "%%e" r
#elif defined(__x86_64__)
#define reg(r) "%%r" r
#endif

/*
 * we verified setjmp, longjmp at
 *  * MacOSX x86_64 GCC 4.0.1/4.2.1 (-O0/-O1/-O2)
 *  * MacOSX i386   GCC 4.0.1 (-O2)
 */

knh_ExceptionHandler_t* ExceptionHandler_setjmp(CTX ctx, knh_ExceptionHandler_t *hdr)
{
#if defined(__GNUC__)
	knh_uintptr_t rsp;
	asm volatile ("mov " reg("sp") ", %0;" : "=r" (rsp));
	DP(hdr)->return_address = __builtin_return_address(0);
	DP(hdr)->frame_address = __builtin_frame_address(1);
#if defined(__i386__)
	DP(hdr)->stack_pointer = rsp + 0x08;
#elif defined(__x86_64__)
	DP(hdr)->stack_pointer = rsp + 0x10;
#endif
#endif
	return NULL;
}

knh_ExceptionHandler_t *knh_ExceptionHandler_longjmp(CTX ctx, knh_ExceptionHandler_t *hdr)
{
#if defined(__GNUC__)
#if defined(__i386__)
	asm volatile(
			"pop %%ebp;"
			"mov 0x10(%%eax),%%esi;" /* esi = DP(hdr) */
			"mov 0x08(%%esi),%%edx;" /* edx = DP(hdr)->return_address */
			"mov 0x0c(%%esi),%%ebp;" /* ebp = DP(hdr)->frame_address */
			"mov 0x10(%%esi),%%esp;" /* esp = DP(hdr)->stack_pointer */
			"pop %%esi;"
			"jmp *%%edx;"
			::
			"a"(hdr)
			: "%esi", "%edx");
#elif defined(__x86_64__)
	asm volatile(
			"pop %%rbp;"
			"mov %0,%%rsi;"
			"mov %%rsi,%%rbp;"
			"mov %2,%%rsp;"
			"mov %3,%%rax;"
			"mov %4, %%rsi;"
			"mov %%rsi, %%rdi;"
			"jmp *%1;"
			::
			"r"(DP(hdr)->frame_address),
			"r"(DP(hdr)->return_address),
			"r"(DP(hdr)->stack_pointer),
			"r"(hdr),
			"r"(ctx)
			: "%rax", "%rsi", "%rdi");
#endif
#endif
	return hdr;
}
#endif/*K_USING_SETJMP_*/

/* ------------------------------------------------------------------------ */

#ifdef __cplusplus
}
#endif
