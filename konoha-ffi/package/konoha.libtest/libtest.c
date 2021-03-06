#include <konoha1.h>

#include <testlib.h>

#ifdef __cplusplus 
extern "C" {
#endif
  
  /* ____
   * 0: return idex (-4)
   *-----
   * 1: shift idx (-3)
   *-----
   * 2: PC (-2)
   *-----
   * 3: METHOD (-1)
   * -----
   * 4: this
   * ----
   * arg1 ... 
   * ----
   */

  // calldelta + this obj
int knh_callintint2(knh_Func_t *fo, int a, int b)
{
  CTX lctx = (CTX)knh_getCurrentContext();
  knh_intptr_t thisidx = K_CALLDELTA;
  BEGIN_LOCAL(lctx, lsfp, thisidx + 2 /* argc */ + 1);
  if (fo->baseNULL != NULL) {
	KNH_SETv(lctx, fo, fo->baseNULL);
  }
  klr_setmtdNC(lctx, lsfp[K_MTDIDX], fo->mtd);
  CTX ctx = lctx;
  lsfp[1].ivalue = a;
  lsfp[2].ivalue = b;
  if (Method_isKonohaCode(fo->mtd)) {
	knh_VirtualMachine_run(lctx, lsfp , CODE_VEXEC);
  } else {
	KNH_SELFCALL(lctx, lsfp, fo->mtd, K_RTNIDX);
  }
  // get return value;
  int ret = lsfp[K_RTNIDX].ivalue;
  END_LOCAL_(lctx, lsfp);
  return ret;
}

void knh_callint2(knh_Func_t *fo, int a, int b)
{
  CTX lctx = (CTX)knh_getCurrentContext();
  //-4:former mtd; -3:former this; -2:former arg1; -1:former arg2; 0 former arg3...
  // begin local depends on how many arguments are there before calling
  // is this overwriting??
  knh_intptr_t thisidx = K_CALLDELTA;
  BEGIN_LOCAL(lctx, lsfp, thisidx + 2 /* argc */ +1);

  if (fo->baseNULL != NULL) {
	KNH_SETv(lctx, fo, fo->baseNULL);
  }
  klr_setmtdNC(lctx, lsfp[K_MTDIDX], fo->mtd);
  lsfp[1].ivalue = a;
  lsfp[2].ivalue = b;
  CTX ctx = lctx; // method_iskonohacode needs
  if (Method_isKonohaCode(fo->mtd)) {
	knh_VirtualMachine_run(lctx, lsfp , CODE_VEXEC);
  } else {
	KNH_SELFCALL(lctx, lsfp, fo->mtd, K_RTNIDX);
  }
  END_LOCAL_(lctx, lsfp);
}
  
void knh_callvoid(knh_Func_t *fo)
{
  	CTX lctx = (CTX)knh_getCurrentContext();
	knh_intptr_t thisidx = K_CALLDELTA;
	BEGIN_LOCAL(lctx, lsfp, thisidx + 1);
	//	lsfp[K_CALLDELTA + 1] = arg1;
	if (fo->baseNULL != NULL) {
	  KNH_SETv(lctx, fo, fo->baseNULL);
	}
	klr_setmtdNC(lctx, lsfp[K_MTDIDX], fo->mtd);
	KNH_SELFCALL(lctx, lsfp, fo->mtd, K_RTNIDX);
	END_LOCAL_(lctx, lsfp );
	return;
}

static knh_Func_t *g_fo = NULL;
void dummyCallbackVoid(void)
{
  knh_callvoid((knh_Func_t*)g_fo);
}


void dummyCallbackInt2(int a, int b)
{
  knh_callint2((knh_Func_t*)g_fo, a, b);
}

int dummyCallbackIntInt2(int a, int b)
{
  return knh_callintint2((knh_Func_t*)g_fo, a, b);
}

void *knh_copyCallbackFunc(CTX, void*, knh_Func_t*);
//  METHOD Test.callbackIntInt2(Func<int,int=>int> f, int a, int b)
METHOD Test_callbackIntInt2(CTX ctx, knh_sfp_t *sfp _RIX)
{
  knh_Func_t *fo = sfp[1].fo;
  g_fo = fo;
  int i1 = Int_to(int, sfp[2]);
  int i2 = Int_to(int, sfp[3]);
  void *f = knh_copyCallbackFunc(ctx, (void*)dummyCallbackIntInt2, fo);
  int ret = tl_callback_int_int2(i1, i2, (int(*)(int,int))f);
  RETURNi_(ret);
}

METHOD Test_callbackInt2(CTX ctx, knh_sfp_t *sfp _RIX)
{
  knh_Func_t *fo = sfp[1].fo;
  g_fo = fo;
  int i1 = Int_to(int, sfp[2]);
  int i2 = Int_to(int, sfp[3]);
  knh_sfp_t *prev_esp = ctx->esp;
  fprintf(stderr, "bef:%p\n", ctx->esp);
  knh_copyCallbackFunc(ctx, dummyCallbackInt2, fo);
  tl_callback_int2(i1, i2, dummyCallbackInt2);
  fprintf(stderr, "aft:%p, diff:%ld\n", ctx->esp, ctx->esp - prev_esp);
  RETURNvoid_();
}
  
METHOD Test_callbackVoid(CTX ctx, knh_sfp_t *sfp _RIX)
{
	knh_Func_t *fo = sfp[1].fo;
	g_fo = fo;
	knh_copyCallbackFunc(ctx, dummyCallbackVoid, fo);
	tl_callback_void(dummyCallbackVoid);
	RETURNvoid_();
}

EXPORTAPI(const knh_PackageDef_t*) init(CTX ctx)
{
	static const knh_PackageDef_t pkgdef = KNH_PKGINFO("libtest", "1.0", "libtest Library", NULL);
	return &pkgdef;
}

#ifdef __cplusplus
}
#endif
