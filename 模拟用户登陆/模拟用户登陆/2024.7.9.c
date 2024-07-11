#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//库函数：strcmp的头文件

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，
//如果密码正确则提示登录成，如果三次均输入错误，则退出程序。

int main()
{
	int i = 0;
	char password[20] = { 0 };
	//假设密码是字符串：abcdef
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		//比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
		//strcmp的返回值为0；两个字符串相等
		if (strcmp(password, "abcdef") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均输入错误，推出程序\n");
	}

	return 0;
}