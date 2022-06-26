#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	//创建数组
	//int arr[10] = { 1,2,3 };
	//char arr2[5] = { 'a',98 };
	//char arr3[5] = "ab";
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr4));
	printf("%d\n", strlen(arr4));
	return 0;
}