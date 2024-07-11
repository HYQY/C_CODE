#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//C语言中提供了可以随意滥用的 goto语句和标记跳转的标号。
//从理论上 goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码。
//但是某些场合下goto语句还是用得着的，最常见的用法就是终止程序在某些深度嵌套
//的结构的处理过程。
//例如：一次跳出两层或多层循环。
//多层循环这种情况使用break是达不到目的的。它只能从最内层循环退出到上一层的循环。
//goto语句不能跨函数跳转


//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	return 0;
//}


//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：我是猪，就取消关机

int main()
{
	char input = 0;
	//system("shutdown -s -t 60");//执行关机命令
again:
	printf("请注意，你的电脑在60秒内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("已取消关机\n");
	}
	else
	{
		goto again;
	}

	return 0;
}