#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//知识点：
//函数的数组传参：传的是数组首元素的地址，而不是整个数组
//目的：减少内存空间
//1.无法在函数内部计算数组的大小和元素个数

// 写一个函数，实现一个整形有序数组的二分查找。

int binary_search(int arr[], int k, int sz)//arr[]是首元素的地址，是一个指针变量
{
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid + 1;
		}
		else
		{
			return mid;//找到了返回下标
		}
	}

	return -1;//找不到，返回-1
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了，返回下标
	//找不到，返回-1;防止与下标冲突
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}

	return 0;
}


//这是一个错误示范
//int binary_search(int arr[], int k, int sz)//arr[]是首元素的地址，是一个指针变量
//{
//	int left = 0;
//	int right = sz - 1;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//错误！无法在函数内部计算数组的大小和元素个数
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid + 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//
//	return -1;//找不到，返回-1
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//找到了，返回下标
//	//找不到，返回-1;防止与下标冲突
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}


//知识点：
//布尔类型：（bool）
// 
//