#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���� n�Ľ׳�
//1*2*3*...*n

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	//����
//	scanf("%d", &n);
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	//���
//	printf("%d\n", ret);
//
//	return 0;
//}


//���� 1��+2��+3��+...+10!��ֵ
//1+2+6+24 = 33
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	int ret = 1; //�����׳�
//	int sum = 0;//�ܺ�
//	//����
//	scanf("%d", &n);//n = 10
//	//����
//	for (j = 1; j <= n; j++)//������
//	{
//		for (i = 1, ret = 1; i <= j; i++)//��׳ˣ�ÿ������ret
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;//���
//	}
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}

//�Ż�
//int main()
//{
//	int i = 1;
//	int n = 10;
//	int ret = 1; //�����׳�
//	int sum = 0;//�ܺ�
//	//����
//	for (i = 1, ret = 1; i <= n; i++)//��׳ˣ�ÿ������ret
//	{
//		ret = ret * i;
//		sum = sum + ret;//���
//	}
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}


//�ٴ��Ż�
//1
//1*2
//1*2*3
//1*2*3*4
//ֱ��������һ�μ���Ľ�����������ظ�����
int main()
{
	int n = 0;
	int ret = 1; 
	int sum = 0;//�ܺ�
	//����
	for (n = 1; n <= 10; n++)//��׳�
	{
		ret = ret * n;
		sum = sum + ret;// ÿ�ν׳˶�����
	}
	//���
	printf("%d\n", sum);

	return 0;
}