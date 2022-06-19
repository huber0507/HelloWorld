#define _CRT_SECURE_NO_WARNINGS
//standard input output 
#include<stdio.h>
//int是整型的意思
//main前面的int是表示mian函数调用返回一个整型值
int main()  //主函数入口，main函数有且仅有一个
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;  //返回0

	//_CRT_SECURE_NO_WARNINGS  

}