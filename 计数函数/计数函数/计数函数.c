#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//дһ��������ÿ����һ������������ͻὫnum ��ֵ����1��

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}


int Add(int n)
{
	return n + 1;
}

int main()
{
	int num = 0;
	num = Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);

	return 0;
}