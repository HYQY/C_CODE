#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;//p��ָ�����
//	*p = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//�ṹ��
//ѧ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20, "nan", "15596668862" };//��ʼ��
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	//����
	scanf("%d %d", &a, &b);
	//����
	//int m = a / b;
	//int n = a % b;
	//���
	printf("%d %d\n", a / b, a % b );

	return 0;
}