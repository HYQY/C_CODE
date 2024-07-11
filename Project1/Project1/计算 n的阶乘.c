#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算 n的阶乘
//1*2*3*...*n

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	//输入
//	scanf("%d", &n);
//	//计算
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	//输出
//	printf("%d\n", ret);
//
//	return 0;
//}


//计算 1！+2！+3！+...+10!的值
//1+2+6+24 = 33
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	int ret = 1; //单个阶乘
//	int sum = 0;//总和
//	//输入
//	scanf("%d", &n);//n = 10
//	//计算
//	for (j = 1; j <= n; j++)//多次求和
//	{
//		for (i = 1, ret = 1; i <= j; i++)//求阶乘；每次重置ret
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;//求和
//	}
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}

//优化
//int main()
//{
//	int i = 1;
//	int n = 10;
//	int ret = 1; //单个阶乘
//	int sum = 0;//总和
//	//计算
//	for (i = 1, ret = 1; i <= n; i++)//求阶乘；每次重置ret
//	{
//		ret = ret * i;
//		sum = sum + ret;//求和
//	}
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}


//再次优化
//1
//1*2
//1*2*3
//1*2*3*4
//直接利用上一次计算的结果，来避免重复计算
int main()
{
	int n = 0;
	int ret = 1; 
	int sum = 0;//总和
	//计算
	for (n = 1; n <= 10; n++)//求阶乘
	{
		ret = ret * n;
		sum = sum + ret;// 每次阶乘都加上
	}
	//输出
	printf("%d\n", sum);

	return 0;
}