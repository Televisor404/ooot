#pragma once
#define Z_BG_SPOT05_SOKO_H

#include "global.h"
#include "ultra64.h"

struct BgSpot05Soko;

typedef void (*BgSpot05SokoActionFunc)(struct BgSpot05Soko*, GlobalContext*);

struct BgSpot05Soko
{
	/* 0x0000 */ DynaPolyActor dyna;
	/* 0x0164 */ BgSpot05SokoActionFunc actionFunc;
	/* 0x0168 */ s32 switchFlag;
};
