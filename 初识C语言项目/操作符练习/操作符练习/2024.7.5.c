#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef unsigned int uint;//typedef--����������
//
//int main()
//{
//	unsigned int num = 0; //�޷�������
//	uint num2 = 0;
//
//
//	return 0;
//}

//static���ξֲ����� 
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//static����ȫ�ֱ��� 

//extern--�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	
//
//	return 0;
//}

//static���κ��� 

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}

//#define --�����ʶ������
//#define NUM 100

//#define �����
//�����в����ģ������������͵�
#define ADD(x,y) ((x) + (y))	//((x) + (y))�Ǻ���

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	
	
	printf("%d\n",c );

	return 0;
}

