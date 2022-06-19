#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
struct Book
{
	char name[20];//c语言程序设计
	short price;//55


};
	int main()
	{
		//利用结构体类型-创建一个该类型的结构体变量；
		struct Book b1 = { "C语言程序设计",55 };
		struct Book* pb = &b1; 
		//printf("%s\n", pb ->name );
		//printf("%d\n", pb->price);
		//printf("%s\n", (*pb).name);
		//printf("%d\n", (*pb).price);
		//printf("书名：%s\n", b1.name);
		//printf("价格：%d元\n", b1.price);
		//b1.price = 15;
		//printf("修改后的价格：%d\n", b1.price);
		
//}
	//double d = 3.14;
	//double* pd = &d;
	//printf("%d\n", sizeof(pd));//
	//*pd = 5.5;
	//printf("%lf\n", d);
	//printf("%lf\n", *pd);
	//int a = 10;//申请了4个字节的空间
	//printf("%p\n", &a);
	//int* p = &a;//p是一个变量，指针变量
	//printf("%p\n", p);
	//*p = 20; //*是解引用操作符/间接访问操作符
	//printf("a=%d\n", a);
		return 0;
	}