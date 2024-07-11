#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>//Sleep函数的头文件
#include <stdlib.h>//system函数的头文件

//编写代码，演示多个字符从两端移动，向中间汇聚。

//welcome to bit!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//......
//welcome to bit!!!!

int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################"; 

	int left = 0;
	int right = strlen(arr2) - 1;//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//1000ms=1s,休息1秒；头文件：#include <windows.h>

		//清空屏幕
		//system是一个库函数，可以执行系统命令
		system("cls");//系统函数； cls--系统命令（清空屏幕）
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}



