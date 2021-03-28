#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"


void Initboard(char board[ROWS][COLS], int rows, int cols,char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col) {//�βεط�д����[][]
	int i = 0;
	int j = 1;
	printf("-----------------------------------\n");
	for (i = 0; i <= col; i++) {
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf(" %d ", i);
		for (j = 1; j <= col; j++) {
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------\n");
}

void Setmine(char board[ROWS][COLS], int row, int col) {
	int count = easy_count;
	while (count) {
		//�����׵Ĺ���
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x,int y) {
	//'1'-'0'=1�ַ��õ����֣�ASII��������
	return mine[x - 1][y] + mine[x + 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x - 1][y - 1] + mine[x + 1][y + 1] + mine[x][y + 1] +
		mine[x - 1][y + 1]-8*'0';

}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x;
	int y;
	int win = 0;
	while (1) {
	printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y <= 9 && y >= 1) {
			if (mine[x][y] == '1') {
				printf("ը��\n");
				Displayboard(mine, row, col);
				break;
			}
			else {
				//������Χ������
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Displayboard(show, ROW, COL);
				win++;
			}
		}
	}
	if (win == row * col - easy_count) {
		printf("���׳ɹ�");
		Displayboard(show, ROW, COL);
	}
}