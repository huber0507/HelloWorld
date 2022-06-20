#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//int ret = 0;
	//int ch = 0;
	//char password[20] = { 0 };
	//printf("请输入密码：>");
	//scanf("%s", password); //输入密码，并存放在数组password中
	////缓冲区还剩余一个\n
	////读取一下'\n'
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("请确认（Y/N）:>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}


	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}


	//用for循环打印1-100之间的数字
	//int a = 0;
	//for (a = 0; a <= 100; a++)
	//{
	//	printf("%d  ", a);
	//	if (a % 5 == 0)
	//		printf("\n");
	//}

	//交作业时间  计算n的阶乘  如  sum=1*2*3*4*5*6....*n-1*n
	//sum = 0*(a+1)*(a+1
	//for循环				part1
	//int a = 0;
	//int n=10;
	//int sum;
	//for (a = 0;a<n; a++)
	//{
	//	sum = a*a;
	//	printf("sum=%d\n", sum);
	//}

	//part 2
	//int n;//模仿知乎代码
	//scanf("%d", &n);
	//int i;
	//int sum = 1;
	//for (i = 1; i <= n; i++)
	//{
	//	sum *= i;
	//}
	//printf("%d\n", sum);   



		//摘抄至知乎   https://zhuanlan.zhihu.com/p/432773713
		//int n;
		//scanf("%d", &n);
		//int fact = 1;
		//int i;
		//for (i = 1; i <= n; i++)
		//{
		//	fact *= i;
		//}
		//printf("%d\n", fact);

	//while循环
	//int sum = 1;
	//int i=1;
	//int n;
	//scanf("%d", &n);
	//while (i <= n)
	//{	
	//	sum *= i;
	//	i++;
	//}
	//printf("%d", sum);
	

	//do while 循环

	//int sum = 1;
	//int n;
	//int i = 1;
	//scanf("%d\n", &n);
	//do
	//{
	//	sum *= i;
	//	i++;
	//} while (i <= n);
	//	printf("%d\n", sum);

	//计算1！+2！+3！+....+(n-1)!+n!

	//int sum = 1;
	//int n;
	//int i;
	//int ret=1;
	//	scanf("%d\n", &n);
	//	ret = 1;
	//for (i = 1; i <= n; i++)
	//{
	//	
	//	ret =ret* i;  //1    
	//	
	//}
	//sum = sum + ret;
	//printf("sum = %d\n", sum);  此段代码暂时还没有考虑好到底要怎么写好，没有想明白

	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret = ret * i;
	//}
	//printf("ret=%d\n", ret);



	//	1+2+6=9
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 3; n++)
	//{
	//	ret = 1;
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	sum += ret;
	//}
	//scanf("%d", &n);

	//printf("sum=%d\n", sum);


	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &i);
	for (n = 1; n <= i; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}