#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//字符串函数的头文件

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

void Swap(int *px, int *py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//交换
	printf("交换前：a = %d b = %d\n", a, b);
	//a和b叫实际参数，x和y叫形式参数
	//当实参转递给形参的时候，形参是实参的一份临时拷贝
	//对形参的修改不会影响实参
	//Swap(a, b);//错误的
	Swap(&a, &b);//把a和b的地址传给函数
	printf("交换后：a = %d b = %d\n", a, b);

	return 0;
}


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
