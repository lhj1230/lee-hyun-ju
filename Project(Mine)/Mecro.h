#pragma once
#include <windows.h>
#include<iostream>
#include<time.h>
#include<vector>
#include<list>
#include"resource.h"
using namespace std;

#define UI_Y 480
#define TIMER_X 175
#define MINENUM_X 680
#define BLOCK_COUNT 9
#define START_X 40
#define START_Y 40

enum
{
	ID_R1 = 101,
	ID_R2,
	ID_R3,
};

enum LEVEL
{
	LEVEL_EASY = 0,
	LEVEL_NORMAL = 1,
	LEVEL_HARD = 2
};

enum MINE_LEVEL
{
	MINE_LEVEL_EASY = 10,
	MINE_LEVEL_NORMAL = 40,
	MINE_LEVEL_HARD = 99
};

enum MAPSIZE_WIDTH
{
	MAPSIZE_WIDTH_EASY = 10,
	MAPSIZE_WIDTH_NORMAL = 16,
	MAPSIZE_WIDTH_HARD = 30
};

enum MAPSIZE_HEIGHT
{
	MAPSIZE_HEIGHT_EASY = 10,
	MAPSIZE_HEIGHT_NORMAL = 16,
	MAPSIZE_HEIGHT_HARD = 16
};

enum MINE
{
	MINE_HIDE = 0,
	MINE_FLAG = 1,
	MINE_CLICKED = 2
};