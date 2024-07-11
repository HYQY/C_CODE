#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;

	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i = i + 1;
	}

	return 0;
}