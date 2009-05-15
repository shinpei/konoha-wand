/*---------------------------------
 * OpenGL Binding for konoha
 *
 * shinpei nakata(c)2009
 * kindofbrown@users.sourceforge.jp
 *
 *---------------------------------*/

#include <konoha.h>

#ifdef KONOHA_OS__MACOSX
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#include <pthread.h>
#endif

#ifdef KONOHA_OS__LINUX
#include <GL/glut.h>
#endif

Closure *displayfunc;
static knh_thread_key_t lctxkey;

static
void knh_display(void)
{
  Ctx *ctx = konoha_getCurrentContext();
  Ctx *lctx = konoha_getThreadContext(ctx);
  knh_sfp_t *lsfp = KNH_LOCAL(lctx);
  
  knh_Closure_invokesfp(lctx, displayfunc, lsfp, 0);
  //  KNH_SCALL(ctx, lsfp, -1, displayfunc, 0);
  //  displayfunc->fcall_1(ctx, lsfp);
}

METHOD GL_glutInit(Ctx *ctx, knh_sfp_t *sfp)
{
  int i, argc;
  char **argv;
  Array *a = (Array *)sfp[1].o;
  argc = knh_Array_size(a);
  argv = (char **)alloca(argc * sizeof(char*));
  for (i = 0; i < argc; i++) {
	argv[i] = knh_String_tochar((String *)knh_Array_n(a, i));
  }
  glutInit(&argc, argv);
  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glutCreateWindow(Ctx *ctx, knh_sfp_t *sfp)
{
  char *title = p_char(sfp[1]);
  glutCreateWindow(title);
  KNH_RETURN_void(ctx, sfp);
}

void *thread_func(void *param)
{
  fprintf(stderr, "goodbye\n");
  glutMainLoop();
}

METHOD GL_glutMainLoop(Ctx *ctx, knh_sfp_t *sfp)
{
#ifdef KNH_USING_PTHREAD
  fprintf(stderr, "hi\n");
  glutMainLoop();
#else
  pthread_t thread;
  pthread_key_create(&lctxkey, NULL);
  //  pthread_key_

  if (pthread_create(&thread, NULL, thread_func, NULL))
	  perror("cannot create thread");
  pthread_join(thread, NULL);
#endif

  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glutDisplayFunc(Ctx *ctx, knh_sfp_t *sfp)
{
  displayfunc = sfp[1].cc;
  glutDisplayFunc(knh_display);
  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glutInitDisplayMode(Ctx *ctx, knh_sfp_t *sfp)
{
  glutInitDisplayMode(GLUT_RGBA);
  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glClear(Ctx *ctx, knh_sfp_t *sfp)
{
  glClear(GL_COLOR_BUFFER_BIT);
  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glFlush(Ctx *ctx, knh_sfp_t *sfp)
{
  glFlush();
  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glColor3d(Ctx *ctx, knh_sfp_t *sfp)
{
  float f1 = p_float(sfp[1]);
  float f2 = p_float(sfp[2]);
  float f3 = p_float(sfp[3]);

  glColor3d(f1, f2, f3);
  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glVertex2d(Ctx *ctx, knh_sfp_t *sfp)
{
  float f1 = p_float(sfp[1]);
  float f2 = p_float(sfp[2]);
  glVertex2d(f1, f2);
  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glBegin(Ctx *ctx, knh_sfp_t *sfp)
{
  glBegin(GL_LINE_LOOP);
  KNH_RETURN_void(ctx, sfp);
}

METHOD GL_glEnd(Ctx *ctx, knh_sfp_t *sfp)
{
  glEnd();
  KNH_RETURN_void(ctx, sfp);
}
