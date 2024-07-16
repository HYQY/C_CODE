#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一：函数的递归:
//程序调用自身的编程技巧称为递归（ recursion）。
//递归做为一种算法在程序设计语言中广泛应用。 一个过程或函数在其定义或说明中有直接或间接
//调用自身的一种方法，
//它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解。
// 
//二：递归策略：
//只需少量的程序就可描述出解题过程所需要的多次重复计算，大大地减少了程序的代码量。
//递归的主要思考方式在于：把大事化小
//
//三：递归的两个必要条件:
//1.限制条件：存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//2.调整条件：每次递归调用之后越来越接近这个限制条件。
// 
//四：递归，递归；先递再归
//递归像是一种“倒叙”的编程手法和思想。
//递归也像一种“倒叙”的循环，（倒循环）
//
//五：死递归
//1.类似死循环
//2.当没有限制条件时，就会出现死递归，导致栈溢出（Stack overflow）
//  （原因：每一次函数的调用都会在栈区上申请空间，就会导致栈溢出）
//
//练习：
//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入：1234，输出 1 2 3 4.

//%d--是打印有符号的整数（会有正负数）
//%u--是打印无符号的整数


//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//
//	}
//	//printf("%u\n", num);
//
//	return 0;
//}


//递归实现
//print(1234)
//print(123)  4
//print(12)  3  4
//print(1)  2  3  4
//1 2 3 4

//void print(unsigned int n)//n = 1234
//{
//	if (n > 9)//限制条件
//	{
//		print(n / 10);//“n / 10”是调整条件
//	}
//	printf("%d ", n % 10);//递归体，执行体
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//接受一个整型值（无符号），按照顺序打印它的每一位。
//
//	return 0;
//}


//练习：
//编写函数不允许创建临时变量，求字符串的长度。

//求字符串的长度。
//模拟实现strlen

//知识点：
//字符串在内存中是连续存放的

#include <string.h>

//int my_strlen(char* str[]) //参数部分写出数组的形式
//int my_strlen(char* str) //参数部分写出指针的形式
//{
//	int count = 0;//计数，临时变量 
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}


//递归求解
//my_strlen(“abc”);
//1 + my_strlen(“bc”);
//1 + 1 + my_strlen(“c”);
//1 + 1 + 1 + my_strlen(“\0”);
//1 + 1 + 1 + 0

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abc";//[a b c \0]
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "abc";//[a b c \0]
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}