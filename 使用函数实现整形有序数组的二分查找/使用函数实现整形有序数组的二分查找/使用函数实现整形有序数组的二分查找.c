#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//֪ʶ�㣺
//���������鴫�Σ�������������Ԫ�صĵ�ַ����������������
//Ŀ�ģ������ڴ�ռ�
//1.�޷��ں����ڲ���������Ĵ�С��Ԫ�ظ���

// дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�

int binary_search(int arr[], int k, int sz)//arr[]����Ԫ�صĵ�ַ����һ��ָ�����
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
			return mid;//�ҵ��˷����±�
		}
	}

	return -1;//�Ҳ���������-1
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ҵ��ˣ������±�
	//�Ҳ���������-1;��ֹ���±��ͻ
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;
}


//����һ������ʾ��
//int binary_search(int arr[], int k, int sz)//arr[]����Ԫ�صĵ�ַ����һ��ָ�����
//{
//	int left = 0;
//	int right = sz - 1;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����޷��ں����ڲ���������Ĵ�С��Ԫ�ظ���
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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//
//	return -1;//�Ҳ���������-1
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1;��ֹ���±��ͻ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}


//֪ʶ�㣺
//�������ͣ���bool��
// 
//