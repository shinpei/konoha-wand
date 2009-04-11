#include <konoha.h>
#include <wand/MagickWand.h>


/* String MagickWand.getCopyright() */

METHOD MagickWand_getCopyright(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetCopyright();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}
