#include <konoha.h>

#ifdef KONOHA_ON_WINDOWS
#undef METHOD
#define METHOD void __declspec(dllexport)
#undef KNHAPI
#define KNHAPI(T) T __declspec(dllexport)
#endif

#include <libmemcached/memcached.h>

#ifdef __cplusplus
extern "C" {
#endif

static
void knh_Memcached_free(Ctx *ctx, knh_Glue_t *glue)
{
  struct memcached_st *mmc = glue->ptr;
  memcached_free(mmc);
}


METHOD Memcached_new (Ctx *ctx, knh_sfp_t *sfp)
{
  struct memcached_st *mmc = NULL;
  mmc = memcached_create(NULL);
  
  KNH_RETURN(ctx, sfp, new_Glue(ctx, "memcached.Memcached", mmc, knh_Memcached_free));
}

