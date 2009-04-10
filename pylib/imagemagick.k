class MagickWand;
class MagickImage;



Boolean MagickWand.adaptiveBlueImage(Float f1, Float f2);



MagickWand MagickWand.appendImages(self, Boolean);
MagickWand MagickWand.getImages(self);



Int MagickWand.getImageColors(self);
Int MagickWand.getImageCompressionQuality(self);
Int MagickWand.getImageDelay(self);
//Int MagickWand.getImageChannelDepth(self, ChannelType);
Int MagickWand.getImageDepth(self);
Int MagickWand.getImageHeight(self);
Int MagickWand.getImageIterations(self);
Int MagickWand.getImageScene(self);
Int MagickWand.getImageTicksPerSecond(self);
Int MagickWand.getImageWidth(self);
Int MagickWand.getNumberImages(self);


Int MagickWand.getIteratorIndex(self);

Boolean MagickWand.isMagickWand(self);
Boolean MagickWand.clearException(self);
Boolean MagickWand.setIteratorIndex(int l);


MagickWand MagickWand.new();
MagickWand MagickWand.clone(self);
MagickWand MagickWand.destroy(self);
MagickWand MagickWand.newFromImage(MagickImage img);



void Magick.clear(self);
void Magick.genesis();
void Magick.terminus();
void Magick.resetIterator(self);
void Magick.setFirstIterator(self);
void Magick.setLastIterator(self);



