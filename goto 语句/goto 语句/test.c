#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//C�������ṩ�˿����������õ� goto���ͱ����ת�ı�š�
//�������� goto�����û�б�Ҫ�ģ�ʵ����û��goto���Ҳ���Ժ����׵�д�����롣
//����ĳЩ������goto��仹���õ��ŵģ�������÷�������ֹ������ĳЩ���Ƕ��
//�Ľṹ�Ĵ�����̡�
//���磺һ�������������ѭ����
//���ѭ���������ʹ��break�Ǵﲻ��Ŀ�ĵġ���ֻ�ܴ����ڲ�ѭ���˳�����һ���ѭ����
//goto��䲻�ܿ纯����ת


//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	return 0;
//}


//�ػ�����
//1.��������������1�����ڹػ�
//2.������룺��������ȡ���ػ�

int main()
{
	char input = 0;
	//system("shutdown -s -t 60");//ִ�йػ�����
again:
	printf("��ע�⣬��ĵ�����60���ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("��ȡ���ػ�\n");
	}
	else
	{
		goto again;
	}

	return 0;
}