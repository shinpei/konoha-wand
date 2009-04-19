#include <konoha.h>

FILE *fp;
unsigned char *img;
int counter;
METHOD AOBench_open(Ctx *ctx, knh_sfp_t *sfp)
{
  fp = fopen("test.ppm", "wb");
  fprintf(fp, "P6\n");
  fprintf(fp, "%d %d\n", 256,256);
  fprintf(fp, "255\n");
  img = (unsigned char *)malloc(256 * 256 * 3);
  counter = 0;
  KNH_RETURN_void(ctx, sfp);
}

METHOD AOBench_write(Ctx *ctx, knh_sfp_t *sfp)
{
  int index = p_int(sfp[1]);
  int value = p_int(sfp[2]);

  img[index] = (unsigned char)value;
  KNH_RETURN_void(ctx, sfp);
}

METHOD AOBench_close(Ctx *ctx, knh_sfp_t *sfp)
{
  fwrite(img, 256 * 256 * 3, 1, fp);
  fclose(fp);
  free(img);
  KNH_RETURN_void(ctx, sfp);
}
