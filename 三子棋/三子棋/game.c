#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//初始化棋盘，board数组全部初始化为空格
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘--1.0版本
//void DispalyBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//打印分割信息
//		if(i < row - 1)//分割信息少打印一组
//			printf("---|---|---\n");
//	}
//}

//打印棋盘--2.0版本
void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//竖杠少打印一组
				printf("|");
		}
		printf("\n");//打印完一行后换行

		//打印分割信息
		//printf("---|---|---\n");
		if (i < row - 1)//分割信息少打印一组
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//竖杠少打印一组
					printf("|");
			}
			printf("\n");//打印完一行后换行
		}
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:>\n");
	
	while (1)
	{
		printf("请输入坐标:>\n");
		scanf("%d %d", &x, &y);//接收坐标
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标是否合法
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，不能下棋，请选择其他位置\n");
			}
		}
		else
		{
			printf("坐标非法！请重新输入\n");
		}
	}
}

//电脑下棋
//找没有下棋的位置随机下棋
void ComputerMove(char board[ROW][COL], int row, int col) 
{
	printf("电脑下棋:>\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;//生成随机数坐标(0-2)
		y = rand() % col;//生成随机数坐标(0-2)
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}

//IsFull--判断棋盘是否下满
//约定：
//如果满了就返回1
//如果不满就返回0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; j < row; i++)//遍历二维数组
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//判断是否等于空格
			{
				return 0;//不满
			}
		}
	}

	return 1;//满了
}


//判断谁赢
char IsWin(char board[ROW][COL], int row, int col)
{
	//三行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//判断一行中的三个数是否相等，且不等于空格
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//三列
	int j = 0;
	for (j = 0; j < col; j++)
	{
		//判断一列中的三个数是否相等，且不等于空格
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//没有人赢，就要判断平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}

	//游戏继续
	return 'C';
}
