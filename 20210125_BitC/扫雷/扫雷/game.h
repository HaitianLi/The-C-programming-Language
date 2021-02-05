#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define EASY_MODE 10 //雷的数量

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>


//初始化棋盘
void initBoard(char board[ROWS][COLS], char ch);
void DisplayBoard(char board[ROWS][COLS]);

//布置雷
void SetMine(char board[ROWS][COLS], int count);

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int MineCount);

//排查出的雷的信息
int GetMineCount(char mine[ROWS][COLS],int x, int y);


