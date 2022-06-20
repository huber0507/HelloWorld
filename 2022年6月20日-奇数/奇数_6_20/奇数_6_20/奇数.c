#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a = 0;
	int count = 0;
	while (a <= 100)
	{
		if (a%2 != 0)
		{
			if (a < 10)
			{
				printf(" ");//此段是为了将前五个输出的a值与后续的文本进行对齐
			}
			printf("%d ", a);

			count++;
		}
		if (count % 5 == 0)		//输出5个a值便换行
		{
			printf("\n");
			count = 0;
		}
			a++;
	}


	return 0;
	//int a;					//判断一个数是否为奇数
	//scanf("%d\n", &a);
	//if (a/2 == 0)
	//	printf("这个数不是奇数\n");
	//else
	//	printf("这个数是奇数\n");
	//return 0;
}