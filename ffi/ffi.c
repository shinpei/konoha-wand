#include <readline/readline.h>
#include <readline/history.h>
#define __USE_GNU
#include <dlfcn.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct pair_t {
  int k;
  void*v;
};


int main (int ac, char **av)
{
  char *line = NULL;
  char *search_string;
  void *hdl;
  Dl_info dli;
  while (1) {
	line = readline(">>> ");
	if (strncmp(line, "exit", sizeof("exit")) == 0) break;
	if (strncmp(line, "quit", sizeof("quit")) == 0) break;

	/* using section */
	if ((search_string = strstr(line, "using ")) != NULL) {
	  //using token
	  char lib_filename[256] = "lib";
	  strcat(lib_filename, search_string + sizeof("using ")-1);
	  strcat(lib_filename, ".so");

	  if ((hdl = dlopen(lib_filename, RTLD_LAZY)) != NULL) {
		//dlopen success.
		fprintf(stderr, "%s has successfully loaded.\n", lib_filename);
	  } else {
		perror(dlerror());
	  }
	  continue;
	}

	/* call section */
	if ((search_string = strstr(line, "call ")) != NULL) {
	  //call token
	  char function_name[256] = {0};

	  strcat(function_name, search_string + sizeof("call ") - 1);
	  void(*func_ptr)(void);
	  if ((func_ptr = dlsym(hdl, function_name)) != NULL) {
		//symbol found.
		//attempt to get information

		if (dladdr(func_ptr, &dli) != 0) {
		  // success
		  fprintf(stderr, "info of %s\n", function_name);
		  fprintf(stderr, "dli_fname:%s\n", dli.dli_fname);
		  fprintf(stderr, "dli_fbase:%p\n", dli.dli_fbase);
		  fprintf(stderr, "dli_sname:%s\n", dli.dli_sname);
		  fprintf(stderr, "dli_saddr:%p\n", dli.dli_saddr);
		}
		func_ptr();
		fprintf(stderr, "%s called\n", function_name);
	  } else {
		//symbol not found.
		//TODO: man dlopen says, this is not correct error handling.
		perror(dlerror());
	  }
	  continue;
	}
	fprintf(stderr, "%s\n", line);

  }
  return 0;
  
}
