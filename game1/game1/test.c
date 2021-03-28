//测试三子棋游戏
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void munu() {
	printf("**************************\n");
	printf("***********1.play*********\n");
	printf("**************************\n");
}

void game() {
	char ret = 0;
	char board[Row][Col] = {0};
	Initboard(board,Row,Col);//初始化棋盘
	Displayboard(board, Row, Col);//打印棋盘
	while (1) 
	{
		//玩家下棋
		Playermove(board, Row, Col);
		Displayboard(board, Row, Col);
		//判断是否赢比赛
		ret=Iswin(board, Row, Col);
		if (ret != 'c') 
		{
			break;
		}
		//电脑下棋
		Computermove(board, Row, Col);
		Displayboard(board, Row, Col);
		ret=Iswin(board, Row, Col);
		if (ret != 'c') 
		{
			break;
		}
	}	
	if (ret == '*') 
	{
		printf("玩家赢\n");
	}
	else if (ret == '#') 
	{
		printf("电脑赢\n");
	}
	else if(ret =='Q') 
	{
		printf("平局\n");
	}
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		munu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}