#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��2�����������ĺ�
int Add(int x,int y)
{
	return (x + y);
}

int main()
{
	int n1 = 0;
	int n2 = 0;
	//����
	scanf("%d %d", &n1, &n2);
	//���
	int sum = Add(n1, n2);
	//��ӡ
	printf("%d\n", sum);

	return 0;
}