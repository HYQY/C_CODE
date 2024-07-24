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


int main()
{
	
	return 0;
}