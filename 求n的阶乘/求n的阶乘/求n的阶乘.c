#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����ĵ�����ݹ�

//��n�Ľ׳�
//5!--> 5*4*3*2*1--> 5*4!
//n! = n * (n-1)!
//n * fac(n - 1);

//��ʽ��1.��n <= 1ʱ��n! = 1;
//      2.��n > 1ʱ��n! = n * (n-1)!;

//�ݹ�ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//����ʵ��--�ǵݹ�
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//���n��쳲����������������������
//쳲��������У�
//1��1��2��3��5��8��13��21��34��55 ...
//ǰ����֮�͵��ڵ�������
//
//��ʽ��
//1.�� n <= 2 ʱ��Fib(n) = 1��
//2.�� n > 2 ʱ��Fib(n) = Fib(n - 1) + Fib(n - 2)��
//

//�ú����ݹ�����������Ч�ʺܵͣ������ظ����㣬�������õݹ�ʵ��
//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//
//	return 0;
//}


//���n��쳲����������������������
//����ʵ��
//1��1��2��3��5��8��13��21��34��55 ... 
//a, b, c 
//a =1;b = 1;
// c = a + b; a = b; b = c;
//

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//�ݹ�Ĳ���̫��Ҳ��ջ���
//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//}
//
//int main()
//{
//	test(1);
//
//	return 0;
//}


int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}