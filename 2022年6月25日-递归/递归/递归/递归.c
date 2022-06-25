#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include"Add.h"
//int main()
//{
//	int a = 600;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//最简单的递归

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//
//}


//接收一个整型值，并按照顺序打印出来，如：1234 打印： 1 2 3 4
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d\n", &num);//1234
//	//如何打印？？？
//	//递归
//	print(num);
//	return 0;
//}
// 
// 
// 
//求字符串长度
//#include<stdio.h>
//#include<string.h>
//
//int  my_strlen(char* str)
//{
//	//way 1
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	//way 2
//	if (*str != '\0')
//		return 1 + my_strlen(1 + str);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//	//模拟实现strlen函数
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//求n的阶乘
//#include<stdio.h>
//way 1
//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//way 2
//int Fac2(int n)
//{
//	if (n < 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//描述第N个斐波那契数列

//#include<stdio.h>
//
//int Fib(int n)
//{
//	//way 1
//	//if (n <= 2)
//	//	return 1;
//	//else
//	//	return Fib(n - 1) + Fib(n - 2);
//
//	//way 2
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD 驱动测试开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


