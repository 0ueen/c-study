//������������Ϸ
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
	Initboard(board,Row,Col);//��ʼ������
	Displayboard(board, Row, Col);//��ӡ����
	while (1) 
	{
		//�������
		Playermove(board, Row, Col);
		Displayboard(board, Row, Col);
		//�ж��Ƿ�Ӯ����
		ret=Iswin(board, Row, Col);
		if (ret != 'c') 
		{
			break;
		}
		//��������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#') 
	{
		printf("����Ӯ\n");
	}
	else if(ret =='Q') 
	{
		printf("ƽ��\n");
	}
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		munu();
		printf("��ѡ��>");
		scanf("%d",&input);
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
	} while (input);
}

int main() {
	test();
	return 0;
}