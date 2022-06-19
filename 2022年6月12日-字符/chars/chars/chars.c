#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	printf("加入比特\n");
	int line = 0;
	while (line <= 20000)
	{

		printf("我要敲一行代码:%d\n",line);
		line++;
	}
	if(line>=20000)
		printf("好offer！\n");

	//int  input = 0;
	//printf("蒋伟，你要好好学习吗？(1/0)\n");
	//scanf("%d", &input);
	//if (input == 1)
	//{
	//	printf("你就能买得起车位！");
	//}
	//else
	//{
	//	printf("那你以后回家就要找半个小时车位，下雨也是要淋雨！东西也要提着跑！");
	//}
	//printf("c:\\test\\32\\test.c");
	//printf("%c\n", '\'');
	//printf("%s\n","\"");
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c','\0'};
	//printf("%d\n", strlen(arr1));//strlen-string length 计算字符串的长度
	//printf("%d\n", strlen(arr2));
	return 0;
}

//转义字符
//    \?    在书写多个问号时使用
//    \'    用于表示字符常量'
//    \“   用于表示一个字符串内部的双引号 
//    \\    用于表示一个反斜杠，防止它被解释为一个转义序列符。
//    \a    警告字符，蜂鸣
//    \b    退格符
//    \f    进纸符
//    \n    换行
//    \r    回车
//    \t    水平制表符
//    \v    垂直制表符//
//    \ddd  ddd表示1~3个八进制的数字。如:\130 X
//    \xdd  dd表示2个十六进制数字。  如: \x30 0