#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	//default:
//	//	printf("hehe\n");
//	//	break;
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	default://switch����е�default�Ӿ���Է�������λ��
//		printf("hehe\n");
//		break;
//	}
//	return 0;
//}


//char - Ҳ���������μ����
//��Ϊ�ַ��洢��ʱ�򣬴洢����ASCII��ֵ��


////д���뽫�������������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����,���αȽϴ�С�����ķ���a�У������b ,c 
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//�汾��2.0  ʹ�ú���
//д���뽫�������������Ӵ�С���

//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����,���αȽϴ�С�����ķ���a�У������b ,c 
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//дһ�������ӡ1-100֮������3�ı���������

//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}


////���������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//�����Լ��
//	int min = (a < b) ? a : b;//��Сֵ
//	int m = min;
//	while (1)//������⣨һ��һ���ԣ�����Ч
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//
//	}
//	printf("%d\n", m);
//
//	return 0;
//}


//շת�����
//���������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//�����Լ��
//	while (c = a % b)//���a % b == 0,��ôb�������Լ��
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}


//��������������������������С������
//��С������ = a * b / ���Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int product = 0;//a��b�ĳ˻�
//	//����
//	scanf("%d %d", &a, &b);
//	product = a * b;
//	//����С������
//	while (c = a % b)//���a % b == 0,��ôb�������Լ��
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", product / b);
//
//	return 0;
//}


int main()
{
	
	return 0;
}