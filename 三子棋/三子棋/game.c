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
			if (j < col - 1)//�����ٴ�ӡһ��
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
				if (j < col - 1)//�����ٴ�ӡһ��
					printf("|");
			}
			printf("\n");//��ӡ��һ�к���
		}
	}
}

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������:>\n");
	
	while (1)
	{
		printf("����������:>\n");
		scanf("%d %d", &x, &y);//��������
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж������Ƿ�Ϸ�
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã��������壬��ѡ������λ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

//��������
//��û�������λ���������
void ComputerMove(char board[ROW][COL], int row, int col) 
{
	printf("��������:>\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;//�������������(0-2)
		y = rand() % col;//�������������(0-2)
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}

//IsFull--�ж������Ƿ�����
//Լ����
//������˾ͷ���1
//��������ͷ���0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; j < row; i++)//������ά����
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//�ж��Ƿ���ڿո�
			{
				return 0;//����
			}
		}
	}

	return 1;//����
}


//�ж�˭Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	//����
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//�ж�һ���е��������Ƿ���ȣ��Ҳ����ڿո�
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//����
	int j = 0;
	for (j = 0; j < col; j++)
	{
		//�ж�һ���е��������Ƿ���ȣ��Ҳ����ڿո�
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//û����Ӯ����Ҫ�ж�ƽ��
	if (IsFull(board, row, col))
	{
		return 'Q';
	}

	//��Ϸ����
	return 'C';
}
