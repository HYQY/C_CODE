#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ģ�飺
//test.c -- ������Ϸ���߼�
//game.c -- ��Ϸ�����ʵ��
//game.h -- ��Ϸ������������������������Ŷ��壩

void menu()
{
	printf("******************************\n");
	printf("**********  1.play  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
}

game()
{
	char board[ROW][COL] = { 0 };//��������
	
	InitBoard(board, ROW, COL);//��ʼ�����̵ĺ���

	DispalyBoard(board, ROW, COL);//��ӡ����
}

int main()
{
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);


	return 0;
}