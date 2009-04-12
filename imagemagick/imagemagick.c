#include <konoha.h>
#include <wand/MagickWand.h>


/* void MagickWand.coreGenesis(String s0, Boolean b1) */

METHOD MagickWand_coreGenesis(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s0 = p_char(sfp[0]);
	int b1 = p_int(sfp[1]);

	KNH_RETURN_void(ctx, sfp);
}

/* void MagickWand.coreTerminus() */

METHOD MagickWand_coreTerminus(Ctx *ctx, knh_sfp_t* sfp)
{

	KNH_RETURN_void(ctx, sfp);
}

/* String MagickWand.toMime(String s0) */

METHOD MagickWand_toMime(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s0 = p_char(sfp[0]);
	char *ret = MagickToMime(s0 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.describeImage(self) */

METHOD MagickWand_describeImage(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickDescribeImage(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getImageAttribute(self, String s1) */

METHOD MagickWand_getImageAttribute(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[1]);
	char *ret = MagickGetImageAttribute(self ,s1 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* Int MagickWand.getImageIndex(self) */

METHOD MagickWand_getImageIndex(Ctx *ctx, knh_sfp_t* sfp)
{
	int ret = MagickGetImageIndex(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* Boolean MagickWand.clipPathImage(self, String s1, Boolean b2) */

METHOD MagickWand_clipPathImage(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[1]);
	int b2 = p_int(sfp[2]);
	int ret = MagickClipPathImage(self ,s1 ,b2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setImageAttribute(self, String s1, String s2) */

METHOD MagickWand_setImageAttribute(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[1]);
	char *s2 = p_char(sfp[2]);
	int ret = MagickSetImageAttribute(self ,s1 ,s2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setImageIndex(self, Int i1) */

METHOD MagickWand_setImageIndex(Ctx *ctx, knh_sfp_t* sfp)
{
	int i1 = p_int(sfp[1]);
	int ret = MagickSetImageIndex(self ,i1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setImageOption(self, String s1, String s2, String s3) */

METHOD MagickWand_setImageOption(Ctx *ctx, knh_sfp_t* sfp)
{
	char *s1 = p_char(sfp[1]);
	char *s2 = p_char(sfp[2]);
	char *s3 = p_char(sfp[3]);
	int ret = MagickSetImageOption(self ,s1 ,s2 ,s3 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* MagickWand MagickWand.flattenImages(self) */

METHOD MagickWand_flattenImages(Ctx *ctx, knh_sfp_t* sfp)
{
