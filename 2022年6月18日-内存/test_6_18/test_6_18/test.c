#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
struct Book
{
	char name[20];//c���Գ������
	short price;//55


};
	int main()
	{
		//���ýṹ������-����һ�������͵Ľṹ�������
		struct Book b1 = { "C���Գ������",55 };
		struct Book* pb = &b1; 
		//printf("%s\n", pb ->name );
		//printf("%d\n", pb->price);
		//printf("%s\n", (*pb).name);
		//printf("%d\n", (*pb).price);
		//printf("������%s\n", b1.name);
		//printf("�۸�%dԪ\n", b1.price);
		//b1.price = 15;
		//printf("�޸ĺ�ļ۸�%d\n", b1.price);
		
//}
	//double d = 3.14;
	//double* pd = &d;
	//printf("%d\n", sizeof(pd));//
	//*pd = 5.5;
	//printf("%lf\n", d);
	//printf("%lf\n", *pd);
	//int a = 10;//������4���ֽڵĿռ�
	//printf("%p\n", &a);
	//int* p = &a;//p��һ��������ָ�����
	//printf("%p\n", p);
	//*p = 20; //*�ǽ����ò�����/��ӷ��ʲ�����
	//printf("a=%d\n", a);
		return 0;
	}