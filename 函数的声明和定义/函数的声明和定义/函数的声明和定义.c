#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//����ͷ�ļ����ǰ�ͷ�ļ���������

//�����������Ͷ���

//����������:
//1. ���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ�����
//   �����������ˡ�
//2. ����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//3. ����������һ��Ҫ����ͷ�ļ��еġ�
//int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//�ӷ�
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//�����Ķ���
//�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ�֡�
//int Add(int x, int y)
//{
//	return x + y;
//}


//�Զ���ͷ�ļ���""������
#include "add.h"//����add.hͷ�ļ�
//#include "sub.h"//����sub.hͷ�ļ�


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//�ӷ�
	int sum = Add(a, b);
	printf("%d\n", sum);
	//����
	//int ret = Sub(a, b);
	//printf("%d\n", ret);


	return 0;
}


//ΪʲôҪ�Ѵ����Ϊ����ļ���
//1.����������Э��
//2.ģ�黯
//


//��̬�⣺
//���ã�������ܣ�����Ŀ
//��add.c���add.lib�ļ� 
//
//ʹ�ã�
// #pragma comment(lib, "add.lib")//���뾲̬��
//
