#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu() {
	printf("#############\n");
	printf("## 1. play ##\n");
	printf("## 0. exit ##\n");
}

void game() {
	//创建棋盘对应的数组
	char mine[ROWS][COLS]; //存放布置好的雷的信息
	char show[ROWS][COLS]; //存放展示的棋盘

	initBoard(mine,'0');
	initBoard(show, '*');

	//打印棋盘
	//DisplayBoard(mine);
	DisplayBoard(show);
	SetMine(mine, EASY_MODE);
	//DisplayBoard(show);

	//排查雷
	FindMine(mine, show, EASY_MODE);
}

int main() {

	int input = 0;
	srand((unsigned)time(NULL));

	do {
		menu();
		printf("请选择： ");
		scanf("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("Game end\n");
			break;
		default:
			printf("Wrong input\n");
			break;
		}

	} while (input);
	
	return 0;
}