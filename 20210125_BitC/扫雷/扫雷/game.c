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
		for (int j = 0; j < COL; j++) {
			printf("%c ", board[i][j]);
		}
		putchar('\n');
	}
	
}

void SetMine(char board[ROWS][COLS], int count) {

	while (count) {
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}