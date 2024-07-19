#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数的迭代与递归

//求n的阶乘
//5!--> 5*4*3*2*1--> 5*4!
//n! = n * (n-1)!
//n * fac(n - 1);

//公式：1.当n <= 1时，n! = 1;
//      2.当n > 1时，n! = n * (n-1)!;

//递归实现
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//迭代实现--非递归
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//求第n个斐波那契数。（不考虑溢出）
//斐波那契数列：
//1，1，2，3，5，8，13，21，34，55 ...
//前两个之和等于第三个数
//
//公式：
//1.当 n <= 2 时，Fib(n) = 1；
//2.当 n > 2 时，Fib(n) = Fib(n - 1) + Fib(n - 2)；
//

//用函数递归来解决程序的效率很低，存在重复计算，不建议用递归实现
//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//
//	return 0;
//}


//求第n个斐波那契数。（不考虑溢出）
//迭代实现
//1，1，2，3，5，8，13，21，34，55 ... 
//a, b, c 
//a =1;b = 1;
// c = a + b; a = b; b = c;
//

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//递归的层数太多也会栈溢出
//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//}
//
//int main()
//{
//	test(1);
//
//	return 0;
//}


int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}