#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	//int a = 10;
	//if (a == 3)
	//	printf("hehe\n");

	/*int age = 20;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能饮酒\n");
	}
	else
	{
		printf("成年\n");
		printf("能饮酒\n");
	}*/


	/*int age = 101;

	if (age < 18)
		printf("青少年\n");
	else if(age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 40)
		printf("中年\n");
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age < 100)
		printf("老年\n");
	else
		printf("老寿星\n");*/


	//int num = 3;
	//if (3 == num)	//if(num == 5)
	//	printf("hehe\n");


	////判断一个数是否为奇数
	//int num = 0;
	//scanf("%d", &num);
	////判断
	//if (num % 2 == 1)
	//	printf("奇数\n");
	//else
	//	printf("不是奇数\n");


	//int i = 0;
	////输出1-100之间的奇数
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 2 == 1)
	//		printf("%d\n", i);
	//}

	/*int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}*/


	/*int day = 0;
	scanf("%d", &day);*/
	
	/*switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	}*/

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("选择错误\n");
		break;
	}

	return 0;
}*/

//打印1--10的数字
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	/*int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);*/
//	
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//
//	//举例
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码（Y / N）：>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

//只打印数字字符
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	//求数组arr的个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	//输出
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0;
//}


//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	//输入
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//输出
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
//
//	return 0;
//}


//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//
//	return 0;
//}


//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");
//
//	return 0;
//}


//求四个数的最大值
//int main()
//{
//	int arr[4] = {0};
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//找最大值
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//
//	scanf("%d", &max);
//
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//计算球体的体积
//int main()
//{
//	double r = 0.0f;
//	double v = 0.0f;
//	scanf("%lf", &r);
//	//计算
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf\n", v);
//
//	return 0;
//}

//计算体重指数
//int main()
//{
//	int weight = 0;
//	int high = 0;
//
//	scanf("%d %d", &weight, &high);
//	//计算
//	float bmi = weight / (high / 100.0) / (high / 100.0);
//	//输出
//	printf("%.2f\n", bmi);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	////0-9
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//for循环的判断部分省略意味这判断会恒成立
	//for ( ; ; )
	//{
	//	printf("hehe\n ");
	//}
	
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n"); 
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	printf("%d", k);
//
//	return 0;
//}


//do...while循环
int main()
{
	int i = 1;

	do
	{
		if (i == 5)
			continue;

		printf("%d ", i);
		i++;
	}
	while (i <= 10);

	return 0;
}