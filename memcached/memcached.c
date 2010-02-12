/*libmemcached bindings for konoha v0.5
 * kindofbrown@users.sourceforge.jp
 *kindofbrown(c)2010
 */

#include <konoha.h>
#include <err.h>

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


  /* Memcached Memcached.new() */
METHOD Memcached_new (Ctx *ctx, knh_sfp_t *sfp)
{
  struct memcached_st *mmc = NULL;
  mmc = memcached_create(NULL);
  if (!mmc) {
    warnx("cannot create memcached");
    return ;
  }
  KNH_RETURN(ctx, sfp, new_Glue(ctx, "memcached.Memcached", mmc, knh_Memcached_free));
}

/* void Memcached.appendServerList(String[] serverlist) */
METHOD Memcached_appendServerList(Ctx *ctx, knh_sfp_t *sfp)
{
  knh_Array_t *a = (knh_Array_t *)sfp[1].o;
  struct memcached_st *mmc = (struct memcached_st *)(sfp[0].glue->ptr);
  if (mmc == NULL) {
    // KNH_THROWs();
    return ;
  }  
  int argc, i;
  char **hostnames;
  argc = knh_Array_size(a);
  hostnames = (char **)alloca(argc * sizeof(char*));
  char **ptr;
  struct memcached_server_st *servers = NULL;
  memcached_return rc;
  int port = 11211;

  for (i = 0; i < argc; i++) {
    hostnames[i] = knh_String_tochar((knh_String_t *)knh_Array_n(a, i));
    servers = memcached_server_list_append(servers, *hostnames, port, &rc);
    if (MEMCACHED_SUCCESS != rc) {
      warnx(memcached_strerror(mmc, rc));
    }
  }
  rc = memcached_server_push(mmc, servers);
  if (MEMCACHED_SUCCESS != rc) {
      warnx(memcached_strerror(mmc, rc));
  }

  memcached_server_list_free(servers);

    
  KNH_RETURN_void(ctx, sfp);
}

  /* void Memcached.setKeyValue(String key, String value) */
METHOD Memcached_setKeyValue(Ctx* ctx, knh_sfp_t *sfp) 
{
  struct memcached_st *mmc = (struct memcached_st *)sfp[0].glue->ptr;
  if (mmc == NULL) {
    // KNH_THROWs();
    return ;
  }
  size_t klen, vlen;
  char *key, *value;
  time_t expire = 33;
  uint32_t flags = 0;
  memcached_return rc;

  key = knh_String_tochar(sfp[1].s);
  klen = knh_String_strlen(sfp[1].s);
  value = knh_String_tochar(sfp[2].s);
  vlen = knh_String_strlen(sfp[2].s);
  
  rc = memcached_set(mmc, key, klen, value, vlen, expire, flags);
  if (MEMCACHED_SUCCESS != rc) {
    warnx("Cannot set %s", key);
    warnx(memcached_strerror(mmc, rc));
    return;
  }

  KNH_RETURN_void(ctx, sfp);
}

  /* String Memcached.getValue(String key) */
METHOD Memcached_getValue(Ctx* ctx, knh_sfp_t *sfp) 
{
  struct memcached_st *mmc = (struct memcached_st *)sfp[0].glue->ptr;
  memcached_return rc;
  char *value, *key;
  size_t klen, vlen;
  uint32_t flags = 0;
  key = knh_String_tochar(sfp[1].s);
  klen = knh_String_strlen(sfp[1].s);
  value =  memcached_get(mmc, key, klen, &vlen, &flags, &rc);
  if (MEMCACHED_SUCCESS != rc) {
    warnx("Cannot set %s", key);
    warnx(memcached_strerror(mmc, rc));
    return;
  }  
  KNH_RETURN(ctx, sfp, new_String(ctx, B(value), NULL));
}
