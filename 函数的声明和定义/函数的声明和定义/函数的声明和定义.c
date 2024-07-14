#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//包含头文件就是把头文件拷贝过来

//函数的声明和定义

//函数的声明:
//1. 告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，函数
//   声明决定不了。
//2. 函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//3. 函数的声明一般要放在头文件中的。
//int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//加法
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//函数的定义
//函数的定义是指函数的具体实现，交待函数的功能实现。
//int Add(int x, int y)
//{
//	return x + y;
//}


//自定义头文件用""括起来
#include "add.h"//包含add.h头文件
//#include "sub.h"//包含sub.h头文件


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//加法
	int sum = Add(a, b);
	printf("%d\n", sum);
	//减法
	//int ret = Sub(a, b);
	//printf("%d\n", ret);


	return 0;
}


//为什么要把代码分为多个文件：
//1.多名开发者协作
//2.模块化
//


//静态库：
//作用：代码加密，卖项目
//把add.c变成add.lib文件 
//
//使用：
// #pragma comment(lib, "add.lib")//导入静态库
//
