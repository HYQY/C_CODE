#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//求2个任意整数的和
int Add(int x,int y)
{
	return (x + y);
}

int main()
{
	int n1 = 0;
	int n2 = 0;
	//输入
	scanf("%d %d", &n1, &n2);
	//求和
	int sum = Add(n1, n2);
	//打印
	printf("%d\n", sum);

	return 0;
}