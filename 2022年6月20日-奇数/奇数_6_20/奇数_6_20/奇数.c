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
				printf(" ");//�˶���Ϊ�˽�ǰ��������aֵ��������ı����ж���
			}
			printf("%d ", a);

			count++;
		}
		if (count % 5 == 0)		//���5��aֵ�㻻��
		{
			printf("\n");
			count = 0;
		}
			a++;
	}


	return 0;
	//int a;					//�ж�һ�����Ƿ�Ϊ����
	//scanf("%d\n", &a);
	//if (a/2 == 0)
	//	printf("�������������\n");
	//else
	//	printf("�����������\n");
	//return 0;
}