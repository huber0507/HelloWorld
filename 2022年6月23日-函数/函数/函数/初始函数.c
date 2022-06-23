#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//	return 0;
//}


//#include<string.h>
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "############################";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;			//拷贝字符串
//}

int get_max(int x, int y)  //自定义函数 比较两个整型变量的值
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);  //函数的使用
	printf("max=%d\n", max);
	max = get_max(100, 300);
	printf("max=%d\n", max);
	return 0;
}