#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>//time������ͷ�ļ�

//������
//���Բ���һ���������1-100��
//������
//�´���
//��С��
//ֱ���¶��ˣ�����

void menu()
{
	printf("*******************************\n");
	printf("**********  1.play  ***********\n");
	printf("**********  0.exit  ***********\n");
	printf("*******************************\n");
}

void game()
{
	int guess = 0;
	int number = 0;//��¼���˼���
	//1.���������
	//0-99 --> 1-100
	//һ���� % 100 ��������0-99����һ���� 1-100
	int ret = rand() % 100 + 1;//����������ĺ�������Χ��0--RAND_MAX(32767)
	//printf("%d\n", ret);
	//2.������
	
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		number++;

		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			printf("��һ������%d�Ρ�\n", number);
			break;
		}
	}
}

int main()
{
	int input = 0;
	//Ҫ����rand������Ҫ�ȵ���srand����;time��������ȡϵͳʱ��
	srand((unsigned int)time(NULL));//ֻҪ����һ�ξͿ�����

	do
	{
		menu();//�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}