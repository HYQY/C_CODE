#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//�⺯����strcmp��ͷ�ļ�

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬
//���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����

int main()
{
	int i = 0;
	char password[20] = { 0 };
	//�����������ַ�����abcdef
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
		//strcmp�ķ���ֵΪ0�������ַ������
		if (strcmp(password, "abcdef") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������������Ƴ�����\n");
	}

	return 0;
}