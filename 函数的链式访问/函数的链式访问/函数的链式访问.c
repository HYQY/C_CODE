#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数的链式访问：
//像一个链条一样把多个函数连接起来
//把一个函数的返回值做了另一个函数的参数

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//链式访问,strlen函数的返回值做了printf函数的参数
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}


//经典的链式访问
//int main()
//{
//	//printf函数的返回值是字符打印的个数
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//
//	return 0;
//}


//函数不写返回值类型的时候，默认的返回类型是int
//错误示范：
//Add(int x, int y)
//{
//	return x + y;
//}

//正确示范：
//int Add(int x, int y)//函数的返回值类型不能省略
//{
//	return x + y;
//}

//函数的返回类型和return是一一对应的，不能省略
//错误示范：
//int Add(int x, int y)
//{
//	printf("hehe\n");//在一些编译器上返回的是函数中最后一条指令执行的结果
//}


//函数的括号内加void--拒绝传参
//void test(void)
//{
//	printf("hehe\n");
//}


//main函数的参数：有3个参数
//int main(int argc, char* argv[], char* envp[])
//{
//
//	return 0;
//}

