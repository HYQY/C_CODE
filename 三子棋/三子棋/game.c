#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//��ʼ�����̣�board����ȫ����ʼ��Ϊ�ո�
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ӡ����--1.0�汾
//void DispalyBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡ����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//��ӡ�ָ���Ϣ
//		if(i < row - 1)//�ָ���Ϣ�ٴ�ӡһ��
//			printf("---|---|---\n");
//	}
//}

//��ӡ����--2.0�汾
void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");//��ӡ��һ�к���

		//��ӡ�ָ���Ϣ
		//printf("---|---|---\n");
		if (i < row - 1)//�ָ���Ϣ�ٴ�ӡһ��
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");//��ӡ��һ�к���
		}
	}
}