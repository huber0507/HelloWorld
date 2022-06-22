#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 1*1=1
// 2*1=2	2*2=4
// 3*1=3	3*2=6	3*3=9
// 4*1=4	4*2=8	4*3=12	4*4=12
//  ....
// 9*1=9	...						9*9=81
int main()
{
	int i = 0;
	//确定打印9行
	for (i = 1; i < 9; i++)
	{
		//打印一行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}