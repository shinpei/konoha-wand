#include <stdio.h>
#include <stdlib.h>
#include <wand/MagickWand.h>
int main(int argc, char **argv)
{
	MagickBooleanType status;
	MagickWand *magick_wand;
	MagickWandGenesis();
	magick_wand = NewMagickWand();
	status = MagickReadImage(magick_wand, argv[1]);
}
