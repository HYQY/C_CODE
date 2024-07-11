#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//二分查找（折半查找）
//在一个有序数组中查找具体的某个数字n

//1.普通查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//查找k
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//查找k
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间下标
//		if (arr[mid] < k)//比k小，左下标=中间下标+1
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)//比k大，右下标=中间下标-1
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)//如果左下标 > 右下标，找不到
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//部分优化（防止left + right的和大于int类型的范围）
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//查找k
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标

	while (left <= right)
	{
		//int mid = (left + right) / 2;//中间下标
		int mid = left + (right - left) / 2;

		if (arr[mid] < k)//比k小，左下标=中间下标+1
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)//比k大，右下标=中间下标-1
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)//如果左下标 > 右下标，找不到
	{
		printf("找不到\n");
	}

	return 0;
}