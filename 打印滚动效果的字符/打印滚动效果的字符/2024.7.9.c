#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>//Sleep������ͷ�ļ�
#include <stdlib.h>//system������ͷ�ļ�

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�

//welcome to bit!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//......
//welcome to bit!!!!

int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################"; 

	int left = 0;
	int right = strlen(arr2) - 1;//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//1000ms=1s,��Ϣ1�룻ͷ�ļ���#include <windows.h>

		//�����Ļ
		//system��һ���⺯��������ִ��ϵͳ����
		system("cls");//ϵͳ������ cls--ϵͳ��������Ļ��
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}



