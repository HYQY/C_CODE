#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef unsigned int uint;//typedef--类型重命名
//
//int main()
//{
//	unsigned int num = 0; //无符号整型
//	uint num2 = 0;
//
//
//	return 0;
//}

//static修饰局部变量 
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//static修饰全局变量 

//extern--声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	
//
//	return 0;
//}

//static修饰函数 

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}

//#define --定义标识符常量
//#define NUM 100

//#define 定义宏
//宏是有参数的，参数是无类型的
#define ADD(x,y) ((x) + (y))	//((x) + (y))是宏体

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	
	
	printf("%d\n",c );

	return 0;
}

