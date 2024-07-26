#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	//default:
//	//	printf("hehe\n");
//	//	break;
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	default://switch语句中的default子句可以放在任意位置
//		printf("hehe\n");
//		break;
//	}
//	return 0;
//}


//char - 也是属于整形家族的
//因为字符存储的时候，存储的是ASCII码值。


////写代码将三个整数，按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整,依次比较大小，最大的放在a中，其次是b ,c 
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//版本：2.0  使用函数
//写代码将三个整数，按从大到小输出

//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整,依次比较大小，最大的放在a中，其次是b ,c 
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//写一个代码打印1-100之间所有3的倍数的数字

//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}


////给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//求最大公约数
//	int min = (a < b) ? a : b;//较小值
//	int m = min;
//	while (1)//暴力求解（一个一个试）不高效
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//
//	}
//	printf("%d\n", m);
//
//	return 0;
//}


//辗转相除法
//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//求最大公约数
//	while (c = a % b)//如果a % b == 0,那么b就是最大公约数
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}


//给定两个数，求这两个数的最小公倍数
//最小公倍数 = a * b / 最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int product = 0;//a和b的乘积
//	//输入
//	scanf("%d %d", &a, &b);
//	product = a * b;
//	//求最小公倍数
//	while (c = a % b)//如果a % b == 0,那么b就是最大公约数
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", product / b);
//
//	return 0;
//}


//编写程序数一下 1 到 100 的所有整数中出现多少个数字9
//个位是9： 9，19，29，39，49，59，69，79，89，99
//十位是9： 90，91，92，93，94，95，96，97，98，99

//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 1; i <= 1000; i++)
//	{
//		//判断个位是不是9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//判断个位是不是9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}


//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 ......+ 1/99 - 1/100的值，打印出结果
//分子总是1
//分母是1--100

//int main()
//{
//	int i = 0;
//	double sum = 0;//求和
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;//控制符号，正负交替
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}


//求10个整数中的最大值

//int main()
//{
//	//准备1个整数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//找出最大值
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//
//在屏幕上打印9 * 9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//

//int main()
//{
//	int i = 0;//行
//	for (i = 1; i <= 9; i++)//打印9行
//	{
//		//打印一行
//		int j = 0;//列
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//知识点：
//%2d -- 打印两位整数，如果只有一位数用空格填充，右对齐（2位右对齐）
//%-2d -- 打印两位整数，如果只有一位数用空格填充，左对齐（2位左对齐）

//设计函数时，尽量做到谁申请的资源就由谁来释放


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

//void print_table(int n)
//{
//	int i = 0;//行
//	for (i = 1; i <= n; i++)//打印n行
//	{
//		//打印一行
//		int j = 0;//列
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	
//	return 0;
//}


//把函数处理结果的两个数据返回给主调函数:
// 
//1.用函数返回两个数据--数组
//2.用函数返回两个数据--形参用两个指针
//3.用函数返回两个数据--用两个全局变量

////1.用函数返回两个数据--数组
//void test(int arr[])//函数的传址调用
//{
//	arr[0] = 3;
//	arr[1] = 4;
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//
//	return 0;
//}

////2.用函数返回两个数据--形参用两个指针
//void test(int* px, int* py)//函数的传址调用
//{
//	*px = 3;
//	*py = 4;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test( &a, &b);
//
//	return 0;
//}

//3.用函数返回两个数据--用两个全局变量
int a = 0;
int b = 0;

void test()
{
	a = 3;
	b = 4;
}

int main()
{
	test();
	printf("a=%d b=%d\n", a, b);

	return 0;
}