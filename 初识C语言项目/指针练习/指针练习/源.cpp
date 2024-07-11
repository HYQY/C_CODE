#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针
//int main()
//{
//	int a = 10;
//	int* p = &a;//p是指针变量
//	*p = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//结构体
//学生
//struct Stu
//{
//	//成员
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
//	struct Stu s = { "zhangsan", 20, "nan", "15596668862" };//初始化
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	//输入
	scanf("%d %d", &a, &b);
	//计算
	//int m = a / b;
	//int n = a % b;
	//输出
	printf("%d %d\n", a / b, a % b );

	return 0;
}