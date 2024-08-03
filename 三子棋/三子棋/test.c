#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//分模块：
//test.c -- 测试游戏的逻辑
//game.c -- 游戏代码的实现
//game.h -- 游戏代码的声明（函数声明，符号定义）

void menu()
{
	printf("******************************\n");
	printf("**********  1.play  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
}

game()
{
	char board[ROW][COL] = { 0 };//棋盘数组
	
	InitBoard(board, ROW, COL);//初始化棋盘的函数

	DispalyBoard(board, ROW, COL);//打印棋盘
}

int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);


	return 0;
}