#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60//说明，-s表示取消关机，-t 60表示执行剩余时间；将-s改为-a为取消关机
	//system（）-执行系统命令
	system("shutdown -s -t 60");

	printf("请注意，你的电脑将在1分钟内关机，如果输入\"我是猪\"就取消关机\n请输入：>");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串--strcmp()相等为0
	{
		system("shutdown -a");
		break;
	}
	return 0;
}



//int main()
//{
//
//	printf("hello bit\n");
//	goto go;//go是单纯的符号,可以改成非常量、非关键字、非变量、非预处理命令的符号
//	printf("what?!\n");
//
//go://单纯的符号
//	printf("你好世界\n");
//
//	return 0;
//}

//for (...)
//{
//	for (...)
//	{
//		if (disaster)
//			goto error;
//	}
//}
//…
//error :
//	if (disaster)

//int main()
//{
//
//	printf("hello bit\n");
//	goto again;//again是单纯的符号
//	printf("what?!\n");
//
//again://单纯的符号
//	printf("你好世界\n");
//
//	return 0;
//}







//猜数字游戏
//电脑生成一个随机数
//猜数字


//void menu()
//{
//	printf("********************************\n");
//	printf("**1.play**********0.exit********\n");
//	printf("********************************\n");
//
//}
//
//
//void game()
//{
//	int ret = rand()%100+1;//生成随机数,建议1~100
//	int guess = 0;
//	//time的指针为NULL，其本身是一个long长整形
//	//时间戳：当前计算机的时间减去计算机的起始时间1970-1-1-0：0：0
//	//拿时间戳设置随机数起点
//	//time_t time(time_t*timer)
//	//printf("猜数字\n");
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字：>");
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
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}







////在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//2d表示两位，不到两位用空格补齐,-2d表示左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}








//int main()
//{
//	int arr[] = { -55, -2,- 3,- 4,- 5,- 6,- 7,- 8,- 9, -10 };
//	int max = arr[0];//避免全是负数
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}



//int main()//求和1/1-1/2+1/3-...+1/99-1/100
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;//  1/2商0余1，int为商
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}


//int main()//1~100间9的个数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10==9)
//		{
//			count ++ ;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}









//int main()//100~200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	for (i= 3; i<=200; i+=2)//素数肯定是奇数，+=2表示加2
//	{
//		//试除法，产生2~i-1的数
//		int j = 0;//i=a*b,a或b至少有一个小于等于i开平方
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//素数求解的n种境界


//int main()//能被4整除不能被100整除，或能被400整除的为闰年
//{
//	int year=0;
//	int count=0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//第二种写法
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}



//int main()//辗转相除法，求最大公约数
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()//求1到100中三的倍数
//{
//	int i=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}



//int main()//输入三个数，使其冲大到小排列
//{
//	int a=0;
//	int b=0;
//	int c=0;
//
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}