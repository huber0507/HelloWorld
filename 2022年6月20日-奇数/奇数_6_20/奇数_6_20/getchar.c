#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int ch = 0;
	//ctrl + zº¥ø…Õ£÷π;
	//EOF = end of files;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}