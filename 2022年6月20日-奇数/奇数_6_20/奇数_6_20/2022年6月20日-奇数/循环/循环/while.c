#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//int ret = 0;
	//int ch = 0;
	//char password[20] = { 0 };
	//printf("���������룺>");
	//scanf("%s", password); //�������룬�����������password��
	////��������ʣ��һ��\n
	////��ȡһ��'\n'
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("��ȷ�ϣ�Y/N��:>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("����ȷ��\n");
	//}


	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}


	//��forѭ����ӡ1-100֮�������
	//int a = 0;
	//for (a = 0; a <= 100; a++)
	//{
	//	printf("%d  ", a);
	//	if (a % 5 == 0)
	//		printf("\n");
	//}

	//����ҵʱ��  ����n�Ľ׳�  ��  sum=1*2*3*4*5*6....*n-1*n
	//sum = 0*(a+1)*(a+1
	//forѭ��				part1
	//int a = 0;
	//int n=10;
	//int sum;
	//for (a = 0;a<n; a++)
	//{
	//	sum = a*a;
	//	printf("sum=%d\n", sum);
	//}

	//part 2
	//int n;//ģ��֪������
	//scanf("%d", &n);
	//int i;
	//int sum = 1;
	//for (i = 1; i <= n; i++)
	//{
	//	sum *= i;
	//}
	//printf("%d\n", sum);   



		//ժ����֪��   https://zhuanlan.zhihu.com/p/432773713
		//int n;
		//scanf("%d", &n);
		//int fact = 1;
		//int i;
		//for (i = 1; i <= n; i++)
		//{
		//	fact *= i;
		//}
		//printf("%d\n", fact);

	//whileѭ��
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
	

	//do while ѭ��

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

	//����1��+2��+3��+....+(n-1)!+n!

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
	//printf("sum = %d\n", sum);  �˶δ�����ʱ��û�п��Ǻõ���Ҫ��ôд�ã�û��������

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