#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//字符串函数的头文件
#include <math.h>//sqrt()函数--开平方的头文件

//strcpy--字符串拷贝
//strcpy(目的地,源头);
//strcpy(arr1, arr2);

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//memset函数--memory set 内存设置
//memset(开始位置地址, '修改内容', 修改的字节个数);
//memset(arr + 6, 'x', 5);
//头文件<memory.h> or <string.h>
//

//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr + 6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}


//自定义函数
//写一个函数可以找出两个整数中的最大值。

//int get_max(int x, int y)//函数的定义
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("输入两个整数（两者空格隔开）：");
//	scanf("%d %d", &a, &b);
//	//求较大值
//	//函数的调用
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}


//写一个函数可以交换两个整形变量的内容
//函数的实参与形参的理解
//实参和形参的地址并不相同

//void Swap(int *px, int *py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换
//	printf("交换前：a = %d b = %d\n", a, b);
//	//a和b叫实际参数，x和y叫形式参数
//	//当实参转递给形参的时候，形参是实参的一份临时拷贝
//	//对形参的修改不会影响实参
//	//Swap(a, b);//错误的
//	Swap(&a, &b);//把a和b的地址传给函数
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;//p是指针
//
//	a = 20;//直接改
//	*p = 30;//间接改
//
//	return 0;
//}


//void Swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	//交换
//	printf("交换前：a = %d b = %d\n", a, b);
//	//a和b叫实际参数，x和y叫形式参数
//	//当实参转递给形参的时候，形参是实参的一份临时拷贝
//	//对形参的修改不会影响实参
//	//Swap(a, b);//错误的
//	Swap(&a, &b);//把a和b的地址传给函数
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}


//1. 写一个函数可以判断一个数是不是素数。

//打印100-200之间的素数
//素数是只能被1和它本身整除的数
//比如：1，2，3，5，7...
//7
//1和7整除
//判断2，3，4，5，6，能不能整除7

//版本1.0
//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 100; i <= 200; i++)//产生100-200的数
//	{
//		//判断i是否为素数，是素数就打印
//		//拿2--（i-1）之间的数字去试除i
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)//判断是否是素数
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//判断flag是否还为1
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//版本2.0
//m = a *b
//16 = 2 * 8
//   = 4 * 4
// a和b中一定有一个数字是 <= sqrt(m);//sqrt(m)--开平方m
// 改进：只要试除2--sqrt(m)之间的数就可以了
//
//sqrt()是数学库函数--开平方；头文件：math.h

//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 100; i <= 200; i++)//产生100-200的数
//	{
//		//判断i是否为素数，是素数就打印
//		//拿2--（i-1）之间的数字去试除i
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//判断是否是素数//改进的地方
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//判断flag是否还为1
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//版本3.0
//偶数不可能为素数，排除偶数
//直接从源头上减少数据量，少了一半，提高效率

//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 101; i <= 200; i += 2)//产生100-200的数//优化：排除偶数
//	{
//		//判断i是否为素数，是素数就打印
//		//拿2--（i-1）之间的数字去试除i
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//判断是否是素数//改进的地方
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//判断flag是否还为1
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//1. 写一个函数可以判断一个数是不是素数。
//版本4.0 使用函数

//是素数返回1
//不是素数返回0
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)//判断是否是素数
	{
		if (n % j == 0)
		{
			return 0; //不是素数返回0
		}
	}

	return 1;//是素数返回1
}

int main()
{
	int i = 0;
	int count = 0;//计数
	for (i = 101; i <= 200; i += 2)//产生100-200的数//优化：排除偶数
	{
		//判断i是否为素数，是素数就打印
		//拿2--（i-1）之间的数字去试除i
		if (is_prime(i))//如果返回1，1为真，就打印素数
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}