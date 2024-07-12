#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//知识点：
//函数的功能要单一，高内聚低耦合
//这样的函数别人也能使用

//使用函数判断是不是闰年
//打印1000-2000年之间的闰年
//闰年判断规则：
//1.能被4整除，并且不能被100整除是闰年
//2.能被400整除是闰年

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//简化
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//使用函数判断是不是闰年
//是闰年返回1
//不是闰年返回0
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是不是闰年
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
	}

	return 0;
}


