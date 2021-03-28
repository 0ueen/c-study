#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

//思路
//创建一个二维数组，初始化全为0，安排雷的时侯改为1
//排查雷：输入坐标，判断是否是雷，非雷需要显示周围雷的数目

void menu(){
	printf("*******************\n");
	printf("***** 1.play ******\n");
	printf("***** 0.exit ******\n");
	printf("*******************\n");
	}

void game() {
		printf("扫雷游戏开始\n");
		char mine[ROWS][COLS] = { 0 };
		char show[ROWS][COLS] = { 0 };//排查雷的信息
		Initboard(mine,ROWS,COLS,'0');//实参只用写数组名
		Initboard(show, ROWS, COLS,'*');
		//Displayboard(mine, ROW, COL);
		Displayboard(show, ROW, COL);
		Setmine(mine, ROW, COL);
		//Displayboard(mine, ROW, COL);
		Findmine(mine, show, ROW, COL);
	}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择（1：开始游戏，0：退出游戏）：>");
		scanf("%d",&input );
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
	} while(input);
}

int main() {
	test();
	return 0;
}
