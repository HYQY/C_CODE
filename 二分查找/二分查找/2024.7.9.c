#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ֲ��ң��۰���ң�
//��һ�����������в��Ҿ����ĳ������n

//1.��ͨ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//����k
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//����k
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м��±�
//		if (arr[mid] < k)//��kС�����±�=�м��±�+1
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)//��k�����±�=�м��±�-1
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)//������±� > ���±꣬�Ҳ���
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


//�����Ż�����ֹleft + right�ĺʹ���int���͵ķ�Χ��
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//����k
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�

	while (left <= right)
	{
		//int mid = (left + right) / 2;//�м��±�
		int mid = left + (right - left) / 2;

		if (arr[mid] < k)//��kС�����±�=�м��±�+1
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)//��k�����±�=�м��±�-1
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
	}
	if (left > right)//������±� > ���±꣬�Ҳ���
	{
		printf("�Ҳ���\n");
	}

	return 0;
}