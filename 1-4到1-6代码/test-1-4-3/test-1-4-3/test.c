#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int ch =0;
	while ((ch=getchar())!=EOF)//EOF,end of file -> -1,在键盘上实现按“Ctrl+z”，显示为^Z
	{
		putchar(ch);
	}
	return 0;
}




//int main()
//{
//	int ch = getchar();//获取输入的第一个字符
//	putchar(ch);//输出ch中的字符
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		if (5 == i)
//			continue;//用于终止本次循环，后面的代码不会执行，而是调到while判断部分，如果没有使i变化的语句，会陷入死循环
//		printf("%d\n", i);//打印结果缺少5
//		
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//永久终止循环
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}




//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//switch是整型表达式
//	{
//	case 1:m++;//m=3
//	case 2:n++;//n=2
//	case 3:
//		switch (n)
//		{
//		case 1:n++;//n=3
//		case 2:m++; n++;//m=4
//			break;
//		default:
//			break;
//		}
//	case 4:m++;//m=5
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n",m,n);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day)//switch是整型表达式
//	{
//	case 1://case也是跟着整型常量，不能是常变量
//		if (n == 1)
//			printf("?!\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("Error!请输入1~7\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch是整型表达式
//	{
//	case 1://case也是跟着整型常量，不能是常变量
//		printf("星期一\n");
//	case 2:
//		printf("星期二\n");
//	case 3:
//		printf("星期三\n");
//	case 4:
//		printf("星期四\n");
//	case 5:
//		printf("星期五\n");
//	case 6:
//		printf("星期六\n");
//	case 7:
//		printf("星期天\n");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch是整型表达式
//	{
//	case 1://case也是跟着整型常量，不能是常变量
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}





//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int c = 1;
//	scanf("%d\n", &a);
//	c = a % 2;
//	if (c == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}


//int main()
//{
//	int num = 1;
//	if (5 == num)//即使==漏了一个，也不会错误，因为会报错，5不能够被赋值
//	{
//		printf("hehe\n");
//	}
//}





//int main()
//{
//	int age = 20;
//	scanf("%d/n", &age);
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (18<=age<28)//错误，先判断18<=age为假，即0，而0<28为真，因此无论输入什么都是青年
//	//	printf("青年\n");

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//判断是==，=是赋值
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//		
//	return 0;
//}

	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}		
	//else
	//{
	//	if (age >= 18 && age<28)
	//		printf("青年\n");
	//	else if (age >= 28 && age<50)
	//		printf("壮年\n");
	//	else if (age >= 50 && age<90)
	//		printf("老年\n");
	//	else
	//		printf("古年人\n");
	//}
	//这个形式也行
		
	//if (age < 18)
	//	printf("未成年\n");
	//else if (age>=18 && age<28)
	//	printf("青年\n");
	//else if (age >= 28 && age<50)
	//	printf("壮年\n");
	//else if (age >= 50 && age<90)
	//	printf("老年\n");
	//else
	//	printf("古年人\n");
	;//空语句
	//return 0;//一个分号为一个语句，不加会报错




