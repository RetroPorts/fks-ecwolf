#ifndef __SDLVIDEO_H__
#define __SDLVIDEO_H__
#include "v_video.h"

class SDLVideo : public IVideo
{
 public:
	SDLVideo (int parm);
	~SDLVideo ();

	EDisplayType GetDisplayType () { return DISPLAY_Both; }
	void SetWindowedScale (float scale);

	DFrameBuffer *CreateFrameBuffer (int width, int height, bool fs, DFrameBuffer *old);

  void nextScaler();

private:
	int IteratorMode;
	int IteratorBits;
	bool IteratorFS;
};

extern SDLVideo *Video;

#endif
