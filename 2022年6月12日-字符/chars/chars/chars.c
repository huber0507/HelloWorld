#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	printf("�������\n");
	int line = 0;
	while (line <= 20000)
	{

		printf("��Ҫ��һ�д���:%d\n",line);
		line++;
	}
	if(line>=20000)
		printf("��offer��\n");

	//int  input = 0;
	//printf("��ΰ����Ҫ�ú�ѧϰ��(1/0)\n");
	//scanf("%d", &input);
	//if (input == 1)
	//{
	//	printf("����������λ��");
	//}
	//else
	//{
	//	printf("�����Ժ�ؼҾ�Ҫ�Ұ��Сʱ��λ������Ҳ��Ҫ���꣡����ҲҪ�����ܣ�");
	//}
	//printf("c:\\test\\32\\test.c");
	//printf("%c\n", '\'');
	//printf("%s\n","\"");
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c','\0'};
	//printf("%d\n", strlen(arr1));//strlen-string length �����ַ����ĳ���
	//printf("%d\n", strlen(arr2));
	return 0;
}

//ת���ַ�
//    \?    ����д����ʺ�ʱʹ��
//    \'    ���ڱ�ʾ�ַ�����'
//    \��   ���ڱ�ʾһ���ַ����ڲ���˫���� 
//    \\    ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
//    \a    �����ַ�������
//    \b    �˸��
//    \f    ��ֽ��
//    \n    ����
//    \r    �س�
//    \t    ˮƽ�Ʊ��
//    \v    ��ֱ�Ʊ��//
//    \ddd  ddd��ʾ1~3���˽��Ƶ����֡���:\130 X
//    \xdd  dd��ʾ2��ʮ���������֡�  ��: \x30 0