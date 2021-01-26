#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void InitBoard(char board[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL]) {

	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < COL; j++) {
			printf(" %c %c",board[i][j], (j == COL - 1) ? '\n' : '|');
		}

		if (i < ROW - 1) {
			for (int j = 0; j < COL; j++) {
				printf("---%c", (j == ROW - 1) ? '\n' : '|');
			}
		}
	}
}

void PlayerMove(char board[ROW][COL]) {
	int x = 0;
	int y = 0;
	printf("玩家走: \n");
	while (1) {
		printf("请输入一个坐标: ");

		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
			
			if (board[x - 1][y - 1] != ' ') {
				printf("坐标被占用, 请重新输入!\n");
			}
			else {
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else {
			printf("非法坐标, 请重新输入: ");
		}
	}

}

void AiMove(char board[ROW][COL]) {
	//随机走
	printf("Ai 走: \n");
	//生成0 - 2 的随机数
	while (1) {
		int x = rand() % ROW;
		int y = rand() % COL;

		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}

int pingju(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了
}
char WinCheck(char board[ROW][COL])
{
	int i = 0;
	for (i = 0; i < ROW; i++) {

		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];
		}
	}
	for (i = 0; i < COL; i++) {

		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' '){
			return board[1][i];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' '){
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' '){
		return board[1][1];
	}
	//判断是否平局
	if (pingju(board, ROW, COL) == 1){
		return 'P';
	}
	return 'C';
}






