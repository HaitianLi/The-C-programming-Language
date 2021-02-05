#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void initBoard(char board[ROWS][COLS], char ch) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = ch;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS]) {
	for (int i = 0; i <= COL; i++) {
		printf("%d ", i);
	}
	putchar('\n');

	for (int i = 1; i <= ROW; i++) {
		printf("%d ",i);
		for (int j = 1; j <= COL; j++) {
			printf("%c ", board[i][j]);
		}
		putchar('\n');
	}
	
}

void SetMine(char board[ROWS][COLS], int count) {

	//有雷为1, 无雷为0, 这里用char的1和0 为了后面更方便的排查
	while (count) {
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}

//统计x,y坐标周围有几个雷
int GetMineCount(char mine[ROWS][COLS], int x, int y) {
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int Minecount) {
	int win = 0;


	while (win < ROW * COL - Minecount) {
		printf("请输入要排查的坐标:> ");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);

		//1. 坐标的合法性
		//2. 该坐标处是不是雷, 不是雷, 统计周围的雷的数量
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
			if (mine[x][y] == '1') {
				printf("这有雷\n");
				DisplayBoard(mine);
				break;
			}
			else {
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				printf("%d %c\n", count, count + '0');
				DisplayBoard(show);
				win++;
			}
		}

		if (win == ROW * COL - Minecount) {
			printf("恭喜排雷成功\n");
		}
	}
}