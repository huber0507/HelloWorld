//#define _CRT_SECURE_NO_WARNINGS
//////猜数字游戏
//////1.电脑生成随机数
//////2.猜数字
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
////RAND_MAX 0-32767的数字区间
//
//void game()
//{
//	//1.生成一个随机数
//	int guess = 0;
//	//拿时间戳来生成随机数的起始点
//	//time_t  time(time_t*timer)
//	int ret = rand() % 100+1;//生成0-100随机数
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));//专门用来生成随机数的函数
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()//游戏菜单
//{
//	printf("********************\n");
//	printf("*****  1.play  *****\n");
//	printf("*****  0.exit  *****\n");
//	printf("********************\n");
//}
//
//void game()//游戏
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;//rand生成1————100的随机数
//	while (1)
//	{
//		printf("猜数字>: ");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择>: ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("推出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//	printf("你好！\n");
//again:
//	printf("hehe\n");
//	return 0;
//}


//goto语句
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
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>：");
//		scanf_s("%s\n", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;						
//		}
//	}
//	return 0;
//
//}