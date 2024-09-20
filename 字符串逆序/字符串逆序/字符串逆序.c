#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//×Ö·û´®ÄæĞò£¨µİ¹éÊµÏÖ£©

//int main()
//{
//	char arr[] = "abcdef";
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	//int right = sz - 2;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//º¯ÊıÊµÏÖ
//void reverse(char arr[1])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//×Ö·û´®ÄæĞò£¨µİ¹éÊµÏÖ£©
//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (strlen(str + 1) >= 2)//µ±ÄæĞòµÄ×Ö·û´®ÎªÒ»¸öÊÇÍ£Ö¹ÄæĞò
//	{
//		reverse(str + 1);//4
//	}	
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

void reverse(char arr[], int left, int right)
{
	char tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;

	if (left < right)
	{
		reverse(arr, left + 1, right - 1);
	}
}

int main()
{
	char arr[] = "abcdefg";
	int left = 0;
	int right = my_strlen(arr) - 1;
	reverse(arr, left, right);

	printf("%s\n", arr);

	return 0;
}