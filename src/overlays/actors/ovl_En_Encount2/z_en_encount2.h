#pragma once
#define Z_EN_ENCOUNT2_H

#include "global.h"
#include "ultra64.h"

struct EnEncount2;

typedef void (*EnEncount2ActionFunc)(struct EnEncount2*, GlobalContext*);

struct EnEncount2Particle
{
	/* 0x0000 */ Vec3f pos;
	/* 0x000C */ f32 scale;
	/* 0x0010 */ u8 isAlive;
	/* 0x0014 */ Vec3f moveDirection;
	/* 0x0020 */ Vec3f rot;
};

enum Encount2State
{
	/* 0x0 */ ENCOUNT2_INACTIVE,
	/* 0x1 */ ENCOUNT2_ACTIVE_DEATH_MOUNTAIN,
	/* 0x2 */ ENCOUNT2_ACTIVE_GANONS_TOWER
};
struct EnEncount2
{
	/* 0x0000 */ Actor actor;
	/* 0x014C */ EnEncount2ActionFunc actionFunc;
	/* 0x0150 */ char unk150[0x4];
	/* 0x0154 */ Timer deathMountainSpawnerTimer;
	/* 0x0156 */ Timer timerBetweenRockSpawns;
	/* 0x0158 */ s16 numSpawnedRocks;
	/* 0x015A */ s16 isNotDeathMountain;
	/* 0x015C */ s16 collapseSpawnerInactive;
	/* 0x015E */ Timer particleSpawnTimer;
	/* 0x0160 */ f32 unk160;
	/* 0x0164 */ char unk164[0x4];
	/* 0x0168 */ f32 unk168;
	/* 0x016C */ char unk16C[0x4];
	/* 0x0178 */ f32 unk170;
	/* 0x0174 */ char unk174[0x4];
	/* 0x0178 */ Timer envEffectsTimer;
	/* 0x017C */ f32 unk17C;
	/* 0x0180 */ u64 isQuaking;
	/* 0x0188 */ EnEncount2Particle particles[50];
};
