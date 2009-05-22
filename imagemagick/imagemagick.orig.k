// struct MagickWand
class MagickWand;


Int MagickWand.getImageIndex(self);


String MagickWand.getFilename(self);
String MagickWand.getFormat(self);
String MagickWand.getFont(self);
String MagickWand.getHomeURL();
String MagickWand.getOption(self, String s1);
String MagickWand.queryConfigureOption(String s1);


MagickWand MagickWand.averageImages(self);
MagickWand MagickWand.coalesceImages(self);
MagickWand MagickWand.deconstructImages(self);
MagickWand MagickWand.fxImage(self, String s1);
MagickWand MagickWand.getImage(self);
MagickWand MagickWand.getImageClipMask(self);
MagickWand MagickWand.optimizeImageLayers(self);

Boolean MagickWand.animateImages(self, String s1);
Boolean MagickWand.blurImage(self, Float f1, Float f2);
Boolean MagickWand.charcoalImage(self, Float f1, Float f2);
Boolean MagickWand.clipImage(self);
Boolean MagickWand.commentImage(self, String s1);
Boolean MagickWand.contrastImage(self, Boolean b1);
Boolean MagickWand.contrastStretchImage(self, Float f1, Float f2);
Boolean MagickWand.despeckleImage(self);
Boolean MagickWand.displayImage(self, String s1);
Boolean MagickWand.displayImages(self, String s1);
Boolean MagickWand.edgeImage(self, Float f1);
Boolean MagickWand.embossImage(self, Float f1, Float f2);
Boolean MagickWand.enhanceImage(self);
Boolean MagickWand.equalizeImage(self);
Boolean MagickWand.flipImage(self);
Boolean MagickWand.gammaImage(self, Float f1);
Boolean MagickWand.gaussianBlurImage(self, Float f1, Float f2);
//Boolean MagickWand.getImageGreenPrimary(self, Float f1, Float f2);
Boolean MagickWand.getImageMatte(self);
//Boolean MagickWand.getImageRange(self, Float f1, Float f2);
//Boolean MagickWand.getImageRedPrimary(self, Float f1, Float f2);
//Boolean MagickWand.getImageResolution(self, Float f1, Float f2);
//Boolean MagickWand.getImageWhitePoint(self, Float f1, Float f2);
Boolean MagickWand.hasNextImage(self);
Boolean MagickWand.hasPreviousImage(self);
//Boolean MagickWand.labelmage(self, String s1);
Boolean MagickWand.linearStretchImage(self, Float f1, Float f2);
Boolean MagickWand.magnifyImage(self);
Boolean MagickWand.medianFilterImage(self, Float f1);
Boolean MagickWand.minifyImage(self);
Boolean MagickWand.modulateImage(self, Float f1, Float f2, Float f3);
Boolean MagickWand.motionBlurImage(self, Float f1, Float f2, Float f3);
Boolean MagickWand.nextImage(self);
Boolean MagickWand.normalizeImage(self);
Boolean MagickWand.oilPaintImage(self, Float f1);
Boolean MagickWand.orderedPosterizeImage(self, String s1);
Boolean MagickWand.pingImage(self, String s1);
Boolean MagickWand.previousImage(self);
Boolean MagickWand.radialBlurImage(self, Float f1);
Boolean MagickWand.randomThresholdImage(self, Float f1, Float f2);
Boolean MagickWand.readImage(self, String s1);
Boolean MagickWand.reduceNoiseImage(self, Float f1);
Boolean MagickWand.removeImage(self);
Boolean MagickWand.rollImage(self, int i1, int i2);
Boolean MagickWand.sampleImage(self, int i1, int i2);
Boolean MagickWand.sepiaToneImage(self, Float f1);
Boolean MagickWand.setImageBias(self, Float f1);
Boolean MagickWand.setImageBluePrimary(self, Float f1, Float f2);
Boolean MagickWand.setImageDelay(self, int i1);
Boolean MagickWand.setImageDepth(self, int i1);
Boolean MagickWand.setImageCompressionQuality(self, int i1);
Boolean MagickWand.setImageGreenPrimary(self, Float f1, Float f2);
Boolean MagickWand.setImageGamma(self, Float f1);
Boolean MagickWand.setImageExtent(self, int i1, int i2);
Boolean MagickWand.setImageFilename(self, String s1);
Boolean MagickWand.setImageFormat(self, String s1);
Boolean MagickWand.setImageIterations(self, int i1);
Boolean MagickWand.setImageMatte(self, Boolean b1);
Boolean MagickWand.setImageOpacity(self, Float f1);
Boolean MagickWand.resetImagePage(self, String s1);
Boolean MagickWand.setImageRedPrimary(self, Float f1, Float f2);
Boolean MagickWand.setImageResolution(self, Float f1, Float f2);
Boolean MagickWand.setImageScene(self, int i1);
Boolean MagickWand.setImageTicksPerSecond(self, int i1);
Boolean MagickWand.setImageWhitePoint(self, Float f1, Float f2);
Boolean MagickWand.sharpenImage(self, Float f1, Float f2);
Boolean MagickWand.shaveImage(self, int i1, int i2);
Boolean MagickWand.sketchImage(self, Float f1, Float f2, Float f3);
Boolean MagickWand.solarizeImage(self, Float f1);
Boolean MagickWand.spreadImage(self, Float f1);
Boolean MagickWand.stripImage(self);
Boolean MagickWand.swirlImage(self, Float f1);
Boolean MagickWand.transposeImage(self);
Boolean MagickWand.transverseImage(self);
Boolean MagickWand.thresholdImage(self, Float f1);
Boolean MagickWand.trimImage(self, Float f1);
Boolean MagickWand.uniqueImageColors(self);
Boolean MagickWand.waveImage(self, Float f1, Float f2);
Boolean MagickWand.writeImage(self, String s1);
Boolean MagickWand.writeImages(self, String s1, Boolean b1);


String MagickWand.getCopyright();
String MagickWand.getPackageName();
String MagickWand.getReleaseDate();
String MagickWand.getVersion(int f1);

Boolean MagickWand.setFont(self, String s1);
Boolean MagickWand.setResolution(self, Float f1, Float f2);
Boolean MagickWand.setSize(self, int f1, int f2);

String MagickWand.getImageBlob(self, int i1);
String MagickWand.getImagesBlob(self, int i1);


Float MagickWand.getPointsize(self);

Float MagickWand.getCompressionQuality(self);


//MagickWand MagickWand.new();
//MagickWand MagickWand.clone(self);
//MagickWand MagickWand.destroy(self);

//void MagickWand.clear(self);
//void MagickWand.genesis();
//void MagickWand.terminus();
//void MagickWand.resetIterator(self);
//void MagickWand.setFirstIterator(self);
//void MagickWand.setLastIterator(self);



