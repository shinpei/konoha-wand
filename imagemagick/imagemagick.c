#include <konoha.h>
#include <wand/MagickWand.h>


/* Int MagickWand.getImageIndex(self) */

METHOD MagickWand_getImageIndex(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickGetImageIndex(self );

	KNH_RETURN_Int(ctx, sfp, ret);
}

/* String MagickWand.getFilename(self) */

METHOD MagickWand_getFilename(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetFilename(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getFormat(self) */

METHOD MagickWand_getFormat(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetFormat(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getFont(self) */

METHOD MagickWand_getFont(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *ret = MagickGetFont(self );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getHomeURL() */

METHOD MagickWand_getHomeURL(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetHomeURL();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* MagickWand MagickWand.averageImages(self) */

METHOD MagickWand_averageImages(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickAverageImages(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.coalesceImages(self) */

METHOD MagickWand_coalesceImages(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickCoalesceImages(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.deconstructImages(self) */

METHOD MagickWand_deconstructImages(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickDeconstructImages(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.fxImage(self, String s1) */

METHOD MagickWand_fxImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	MagickWand *ret = MagickFxImage(self ,s1 );

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.getImage(self) */

METHOD MagickWand_getImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickGetImage(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.getImageClipMask(self) */

METHOD MagickWand_getImageClipMask(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickGetImageClipMask(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* MagickWand MagickWand.optimizeImageLayers(self) */

METHOD MagickWand_optimizeImageLayers(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	MagickWand *ret = MagickOptimizeImageLayers(self );

	KNH_RETURN(ctx, sfp, ret);
}

/* Boolean MagickWand.animateImages(self, String s1) */

METHOD MagickWand_animateImages(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickAnimateImages(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.blurImage(self, Float f1, Float f2) */

METHOD MagickWand_blurImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	float f2 = p_float(sfp[2]);
	int ret = MagickBlurImage(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.charcoalImage(self, Float f1, Float f2) */

METHOD MagickWand_charcoalImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	float f2 = p_float(sfp[2]);
	int ret = MagickCharcoalImage(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.clipImage(self) */

METHOD MagickWand_clipImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickClipImage(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.commentImage(self, String s1) */

METHOD MagickWand_commentImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickCommentImage(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.contrastImage(self, Boolean b1) */

METHOD MagickWand_contrastImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int b1 = p_int(sfp[1]);
	int ret = MagickContrastImage(self ,b1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.contrastStretchImage(self, Float f1, Float f2) */

METHOD MagickWand_contrastStretchImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	float f2 = p_float(sfp[2]);
	int ret = MagickContrastStretchImage(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.despeckleImage(self) */

METHOD MagickWand_despeckleImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickDespeckleImage(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.displayImage(self, String s1) */

METHOD MagickWand_displayImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickDisplayImage(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.displayImages(self, String s1) */

METHOD MagickWand_displayImages(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickDisplayImages(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.edgeImage(self, Float f1) */

METHOD MagickWand_edgeImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	int ret = MagickEdgeImage(self ,f1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.embossImage(self, Float f1, Float f2) */

METHOD MagickWand_embossImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	float f2 = p_float(sfp[2]);
	int ret = MagickEmbossImage(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.enhanceImage(self) */

METHOD MagickWand_enhanceImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickEnhanceImage(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.equalizeImage(self) */

METHOD MagickWand_equalizeImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickEqualizeImage(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.flipImage(self) */

METHOD MagickWand_flipImage(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int ret = MagickFlipImage(self );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* String MagickWand.getCopyright() */

METHOD MagickWand_getCopyright(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetCopyright();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getPackageName() */

METHOD MagickWand_getPackageName(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetPackageName();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getReleaseDate() */

METHOD MagickWand_getReleaseDate(Ctx *ctx, knh_sfp_t* sfp)
{
	char *ret = MagickGetReleaseDate();

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getVersion(int f1) */

METHOD MagickWand_getVersion(Ctx *ctx, knh_sfp_t* sfp)
{
	int f1 = p_int(sfp[0]);
	char *ret = MagickGetVersion(f1 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* Boolean MagickWand.setFont(self, String s1) */

METHOD MagickWand_setFont(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	char *s1 = p_char(sfp[1]);
	int ret = MagickSetFont(self ,s1 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setResolution(self, Float f1, Float f2) */

METHOD MagickWand_setResolution(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	float f1 = p_float(sfp[1]);
	float f2 = p_float(sfp[2]);
	int ret = MagickSetResolution(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* Boolean MagickWand.setSize(self, int f1, int f2) */

METHOD MagickWand_setSize(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int f1 = p_int(sfp[1]);
	int f2 = p_int(sfp[2]);
	int ret = MagickSetSize(self ,f1 ,f2 );

	KNH_RETURN_Boolean(ctx, sfp, ret);
}

/* String MagickWand.getImageBlob(self, int i1) */

METHOD MagickWand_getImageBlob(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int i1 = p_int(sfp[1]);
	char *ret = MagickGetImageBlob(self ,i1 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* String MagickWand.getImagesBlob(self, int i1) */

METHOD MagickWand_getImagesBlob(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	int i1 = p_int(sfp[1]);
	char *ret = MagickGetImagesBlob(self ,i1 );

	KNH_RETURN(ctx, sfp, new_String(ctx, B(ret), NULL));
}

/* Float MagickWand.getPointsize(self) */

METHOD MagickWand_getPointsize(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	double ret = MagickGetPointsize(self );

	KNH_RETURN_Float(ctx, sfp, ret);
}

/* Float MagickWand.getCompressionQuality(self) */

METHOD MagickWand_getCompressionQuality(Ctx *ctx, knh_sfp_t* sfp)
{
	MagickWand *self =(MagickWand*)((sfp[0].glue)->ptr);
	double ret = MagickGetCompressionQuality(self );

	KNH_RETURN_Float(ctx, sfp, ret);
}


METHOD MagickWand_new(Ctx *ctx, knh_sfp_t* sfp)
{
  knh_Glue_t *glue = sfp[0].glue;
  glue->ptr = (void *)NewMagickWand();
  KNH_RETURN(ctx, sfp, sfp[0].o);
}
