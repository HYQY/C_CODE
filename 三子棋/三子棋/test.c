#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ģ�飺
//test.c -- ������Ϸ���߼�
//game.c -- ��Ϸ�����ʵ��
//game.h -- ��Ϸ������������������������Ŷ��壩
//


void menu()
{
	printf("******************************\n");
	printf("**********  1.play  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
}

void game()
{
	char ret = 0;//�ж���Ӯ�ķ���ֵ
	char board[ROW][COL] = { 0 };//��������
	
	InitBoard(board, ROW, COL);//��ʼ�����̵ĺ���

	DispalyBoard(board, ROW, COL);//��ӡ����
	//����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')//�ж������Ƿ����
		{
			break;
		}
		DispalyBoard(board, ROW, COL);//��ӡ����
		
		ComputerMove(board, ROW, COL);//��������
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')//�ж������Ƿ����
		{
			break;
		}
		DispalyBoard(board, ROW, COL);//��ӡ����
	}
	if (ret == '*')//�ж���һ��Ӯ��
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DispalyBoard(board, ROW, COL);//��ӡ����
}

int main()
{
	srand((unsigned int)time(NULL));//�������������������
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


