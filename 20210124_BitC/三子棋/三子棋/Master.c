#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu() {

	printf("**************\n");
	printf("***1. play ***\n");
	printf("***0. exit ***\n");
	
}

void game() {

	char status = 0;
	char board[ROW][COL];
	InitBoard(board);
	DisplayBoard(board);

	while (1) {
		PlayerMove(board);
		status = WinCheck(board);
		if (status != 'C') {
			break;
		}
		DisplayBoard(board);

		AiMove(board);
		status = WinCheck(board);
		if (status != 'C') {
			break;
		}
		DisplayBoard(board);
	}

	if (status == '#') {
		printf("电脑赢!\n");
	} else if (status == '*') {
		printf("玩家赢!\n");
	} else {
		printf("平局");
	}

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("请选择: ");
		scanf("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误, 请重新输入\n");
			break;
		}
	
	} while (input);
	return 0;
}