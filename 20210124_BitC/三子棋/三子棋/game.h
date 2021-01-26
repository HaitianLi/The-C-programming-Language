#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL]);

//打印棋盘
void DisplayBoard(char board[ROW][COL]);


//玩家下棋
void PlayerMove(char board[ROW][COL]);


//AI下棋
void AiMove(char board[ROW][COL]);


//判断输赢
char WinCheck(char board[ROW][COL]);

//判断连接
int pingju(char board[ROW][COL]);



