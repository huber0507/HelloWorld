//#define _CRT_SECURE_NO_WARNINGS
//////��������Ϸ
//////1.�������������
//////2.������
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("***    1 play    0 exit     ***\n");
//	printf("*******************************\n");
//}
//
////RAND_MAX 0-32767����������
//
//void game()
//{
//	//1.����һ�������
//	int guess = 0;
//	//��ʱ������������������ʼ��
//	//time_t  time(time_t*timer)
//	int ret = rand() % 100+1;//����0-100�����
//	//2.������
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));//ר����������������ĺ���
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()//��Ϸ�˵�
//{
//	printf("********************\n");
//	printf("*****  1.play  *****\n");
//	printf("*****  0.exit  *****\n");
//	printf("********************\n");
//}
//
//void game()//��Ϸ
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;//rand����1��������100�������
//	while (1)
//	{
//		printf("������>: ");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < r)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>: ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�Ƴ���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//
//{
//	printf("hello mingxuan\n");
//	goto again;
//	printf("��ã�\n");
//again:
//	printf("hehe\n");
//	return 0;
//}


//goto���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60000");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>��");
//		scanf_s("%s\n", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;						
//		}
//	}
//	return 0;
//
//}