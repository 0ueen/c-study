#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

//˼·
//����һ����ά���飬��ʼ��ȫΪ0�������׵�ʱ���Ϊ1
//�Ų��ף��������꣬�ж��Ƿ����ף�������Ҫ��ʾ��Χ�׵���Ŀ

void menu(){
	printf("*******************\n");
	printf("***** 1.play ******\n");
	printf("***** 0.exit ******\n");
	printf("*******************\n");
	}

void game() {
		printf("ɨ����Ϸ��ʼ\n");
		char mine[ROWS][COLS] = { 0 };
		char show[ROWS][COLS] = { 0 };//�Ų��׵���Ϣ
		Initboard(mine,ROWS,COLS,'0');//ʵ��ֻ��д������
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
		printf("��ѡ��1����ʼ��Ϸ��0���˳���Ϸ����>");
		scanf("%d",&input );
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while(input);
}

int main() {
	test();
	return 0;
}
