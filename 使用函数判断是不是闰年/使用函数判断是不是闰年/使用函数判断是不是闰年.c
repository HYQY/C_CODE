#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//֪ʶ�㣺
//�����Ĺ���Ҫ��һ�����ھ۵����
//�����ĺ�������Ҳ��ʹ��

//ʹ�ú����ж��ǲ�������
//��ӡ1000-2000��֮�������
//�����жϹ���
//1.�ܱ�4���������Ҳ��ܱ�100����������
//2.�ܱ�400����������

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
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


//��
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//ʹ�ú����ж��ǲ�������
//�����귵��1
//�������귵��0
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
		//�ж�year�ǲ�������
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
	}

	return 0;
}


