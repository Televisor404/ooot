#pragma once
#define Z_BG_MIZU_MOVEBG_H

#include "global.h"
#include "ultra64.h"

struct BgMizuMovebg;

typedef void (*BgMizuMovebgActionFunc)(struct BgMizuMovebg*, GlobalContext*);

struct BgMizuMovebg
{
	/* 0x0000 */ DynaPolyActor dyna;
	/* 0x0164 */ BgMizuMovebgActionFunc actionFunc;
	/* 0x0168 */ f32 homeY;
	/* 0x016C */ s32 scrollAlpha1;
	/* 0x0170 */ s32 scrollAlpha2;
	/* 0x0174 */ s32 scrollAlpha3;
	/* 0x0178 */ s32 scrollAlpha4;
	/* 0x017C */ u8 sfxFlags;
	/* 0x0180 */ Gfx* dlist;
	/* 0x0184 */ s32 waypointId;
};
