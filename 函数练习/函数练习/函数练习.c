#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//�ַ���������ͷ�ļ�

//strcpy--�ַ�������
//strcpy(Ŀ�ĵ�,Դͷ);
//strcpy(arr1, arr2);

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//memset����--memory set �ڴ�����
//memset(��ʼλ�õ�ַ, '�޸�����', �޸ĵ��ֽڸ���);
//memset(arr + 6, 'x', 5);
//ͷ�ļ�<memory.h> or <string.h>
//

//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr + 6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}


//�Զ��庯��
//дһ�����������ҳ����������е����ֵ��

//int get_max(int x, int y)//�����Ķ���
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("�����������������߿ո��������");
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	//�����ĵ���
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}


//дһ���������Խ����������α���������
//������ʵ�����βε����
//ʵ�κ��βεĵ�ַ������ͬ

void Swap(int *px, int *py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//����
	printf("����ǰ��a = %d b = %d\n", a, b);
	//a��b��ʵ�ʲ�����x��y����ʽ����
	//��ʵ��ת�ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
	//���βε��޸Ĳ���Ӱ��ʵ��
	//Swap(a, b);//�����
	Swap(&a, &b);//��a��b�ĵ�ַ��������
	printf("������a = %d b = %d\n", a, b);

	return 0;
}


//int main()
//{
//	int a = 10;
//	int* p = &a;//p��ָ��
//
//	a = 20;//ֱ�Ӹ�
//	*p = 30;//��Ӹ�
//
//	return 0;
//}
