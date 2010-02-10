#include <stdio.h>
#include <stdlib.h>
#include <err.h>

#include <libmemcached/memcached.h>

/*
memcached_return
Memcached_behavior_set (memcached_st *ptr, memcached_behavior flag, uint64_t data)
{
  memcached_return rc = memcached_behavior_set(ptr, flag, data);
  if (MEMCACHED_SUCCESS != rc) {
    warnx( "%s: %s", __func__, memcached_strerror(ptr, rc));
  }
  return rc;
}
*/

int main (int ac, char** av)
{
  struct memcached_st *mmc = NULL;
  struct memcached_server_st *servers = NULL;
  memcached_return rc;
  int i;

  char *hostnames[] = {
    "192.168.59.222"
  };
  mmc = memcached_create(NULL);
  if (!mmc) {
    warnx ("can not create memcached");
    exit(1);
  }

  int port = 11211;
  char **p;
  p = hostnames;
  //  for (p = hostnames; **p != NLLL; ++p) {
    servers = memcached_server_list_append(servers, *p, port, &rc);
    if (MEMCACHED_SUCCESS != rc){
      warnx(memcached_strerror(mmc, rc));
    }
    //}
  rc = memcached_server_push(mmc, servers);
  if (MEMCACHED_SUCCESS != rc) {
    warnx (memcached_strerror(mmc, rc));
  }

  memcached_server_list_free(servers);

  char *key1 = "a";
  char *key2 = "b";
  char *value1 = "123";
  char *value2 = "456";
    
  time_t expire = 33;
  uint32_t flags = 0;
  size_t len;
  char *val;
    
  /*  rc = memcached_set(mmc, key1, strlen(key1),value1, strlen(value1), expire, flags);
  if (MEMCACHED_SUCCESS != rc) {
    warnx("can not set %s", key1);
    warnx(memcached_strerror(mmc, rc));
  }
  rc = memcached_set(mmc, key2, strlen(key2), value2, strlen(value2), expire, flags);
  if (MEMCACHED_SUCCESS != rc) {
    warnx("can not set %s", key2);
    warnx(memcached_strerror(mmc, rc));
  }
  */
  val = memcached_get(mmc, key1, strlen(key1), &len, &flags, &rc);
  if (MEMCACHED_SUCCESS != rc) {
    warnx ("can not read %s", key1);
    warnx (memcached_strerror(mmc, rc));
  } else {
    printf("%s\n", val);
  }
  free(val);
  val = memcached_get(mmc, key2, strlen(key2), &len, &flags, &rc);
  if (MEMCACHED_SUCCESS != rc) {
    warnx ("can not read %s", key2);
    warnx (memcached_strerror(mmc, rc));
  } else {
    printf("%s\n", val);
  }
  free(val);

  memcached_free(mmc);
  exit(EXIT_SUCCESS);
}



