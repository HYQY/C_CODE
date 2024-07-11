#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>//time函数的头文件

//猜数字
//电脑产生一个随机数（1-100）
//猜数字
//猜大了
//猜小了
//直到猜对了，结束

void menu()
{
	printf("*******************************\n");
	printf("**********  1.play  ***********\n");
	printf("**********  0.exit  ***********\n");
	printf("*******************************\n");
}

void game()
{
	int guess = 0;
	int number = 0;//记录猜了几次
	//1.生成随机数
	//0-99 --> 1-100
	//一个数 % 100 的余数是0-99，加一才是 1-100
	int ret = rand() % 100 + 1;//生成随机数的函数，范围：0--RAND_MAX(32767)
	//printf("%d\n", ret);
	//2.猜数字
	
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		number++;

		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			printf("你一共猜了%d次。\n", number);
			break;
		}
	}
}

int main()
{
	int input = 0;
	//要调用rand函数，要先调用srand函数;time函数：获取系统时间
	srand((unsigned int)time(NULL));//只要设置一次就可以了

	do
	{
		menu();//菜单
		printf("请选择：>");
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
			printf("选择错误，重新选择！\n");
			break;
		}

	} while (input);

	return 0;
}