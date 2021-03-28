#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Initboard(char board[Row][Col], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] =  ' ';
		}
	}
}

void Displayboard(char board[Row][Col], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//一行打印数据一行打印分割行
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);//打印数据
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void Playermove(char board[Row][Col], int row, int col) {
	int x=0;
	int y=0;
	printf("玩家走：>\n");
	while (1) {
		printf("请输入下子的坐标：>\n");
		scanf("%d%d", &x, &y);
		//判断xy坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//判断是否是已经被占用的位置
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("坐标被占用，请重新输入\n");
			}
		}
		else {
			printf("坐标非法，请重新输入\n");
		}
	}
}

void Computermove(char board[Row][Col], int row, int col) {
	int x = 0;
	int y = 0;
	printf("电脑随机走\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}

static int Isfull(char board[Row][Col], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char Iswin(char board[Row][Col], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {//横
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++) {//列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[0][0];
	}
	//判断平局
	if (i == Isfull(board, Row, Col)) {
		return 'Q';
	}
	return 'c';
}