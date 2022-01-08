#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "add.h"

//汉诺塔问题三根柱子，abc，a从上往下叠着大中小三个盘子，请将盘子移到c柱，并且保证任何时候都是下面的盘子大于上面的。
//递归，先将上面的2个盘子放到b柱子上，再将a柱子上的那个放到c柱子上，然后再将b上的一个放到a柱子里，然后就可以解决问题
//拓展到n根柱子，n个盘子，
//将第一根柱子上n-1个盘子，按顺序从最后一根柱子放起，则柱子序号越大，则盘子越小，然后从第三根柱子开始，
//将第四根柱子的碟子放在第三根柱子上面，接着是第5、6、7。。。直到最后一根，
//再将第一个柱子的盘子放到最后一根柱子上。此时重新编排，b相当于第一根柱子，其余顺位排列，以此类推

//青蛙跳台阶，n个台阶，青蛙一次可以跳1个或者跳2个台阶，问青蛙有多少种跳法《剑指offer》67道笔试题
//0个台阶，跳0次，一种跳法（1）
//1个台阶，跳一次，一种跳法（1）
//2个台阶，跳两次，或者两个一次，两种跳法（11）（2）
//3个台阶，（111）（21）（12）三次
//4(1111)(112)(121)(211)(22)5
//5(11111)(1112)(1121)(1211)(2111)(212)(221)(122)8
//总结规律，斐波那契数列n-1



//void test(int n)
//{
//	if (n < 100)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//
//	test(1);
//	return 0;
//}
//斐波那契数列，当前这个数等于前面两个数字之和,1 1 2 3 5 8 13 21 34 55...
//int count = 0;
//int fib(int n)//对于此案例，递归并不是最好的方法,循环的效率更高
//{
//
//	if (n == 3)//算第40个，第三个数用了3千多万次，效率极低
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 2) + fib(n - 1);//效率极低，要知道第一个，要知道下面的2个，一直到2的n次方个，
//	}
//}
//int fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		int a = 1;
//		int b = 1;
//		int c = 1;
//		for (i = 2; i < x; i++)
//		{
//			a = b;
//			b = c;
//			c = a + b;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//先写函数怎么用，再去编写函数，这种方法称为TDD，测试驱动开发。
//	ret = fib(n);
//	printf("%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}




//int fac1(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*fac1(x - 1);
//	}
//int fac1(int x)
//{
//	if (x!=1)
//	{
//		return x*fac1(x-1)
//	}
//	else
//	{
//		return 1;
//	}
//fac1(3)
//fac1(2)3
//fac1(1)2 3
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac1(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int fac1(int x)//阶乘
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac1(n);
//	printf("%d\n", ret);
//
//	return 0;
//}




//int my_strlen(char* str)//递归不创建临时变量
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("\0");

//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//指针变量，地址，地址加一，
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	//int len = strlen(arr);
//	//模拟实现了一个strlen
//	int len = my_strlen(arr);//数组传参，穿的是首元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}
//

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n -7 );
//	}
//	printf("%d ", n -7);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234，
//	//递归，一个函数或者过程在其定义或声明中直接或间接调用自身的一种方法
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();//stack overflow栈溢出，内存分为栈区，堆区，静态区
//	//栈区：局部变量，函数形参
//	//堆区：动态开辟的内存,malloc，calloc
//	//全局变量，static修饰的变量
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 12;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
