#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ά����:
//1 2 3 4
//2 3 4 5 
//3 4 5 6

int main()
{
	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	int arr[3][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6} };
	int i = 0;
	for (i = 0; i < 3; i++)//���Ķ�ά����
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 3; i++)//��ӡ��ά����
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}