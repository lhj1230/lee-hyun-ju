#pragma once
#include<Windows.h>
#include<math.h>
#include<time.h>
#include<vector>
#include<list>

#define MOVESPEED 10
#define GRAVITY 10
#define OBJECT_MAX 10

enum VIEW
{
	VIEW_DOWN = 0,
	VIEW_UP = 1,
	VIEW_LEFT = 2,
	VIEW_RIGHT = 3,
};

enum PLAYER_MOTION
{
	PLAYER_MOTION_STAND = 0,
	PLAYER_MOTION_BACK0 = 0,
	PLAYER_MOTION_BACK1 = 1,
	PLAYER_MOTION_RUN1 = 1,
	PLAYER_MOTION_RUN2 = 2,
	PLAYER_MOTION_JUMP = 2,
};

enum ENEMY_CODE
{
	ENEMY_CODE_RING = 0,
	ENEMY_CODE_SMALLRING = 1,
	ENEMY_CODE_POT = 2
};

enum ITEM_CODE
{
	ITEM_CODE_MONEY = 0
};