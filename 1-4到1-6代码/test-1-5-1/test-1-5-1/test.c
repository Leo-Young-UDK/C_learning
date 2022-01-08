#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//int Add(int a, int b)//函数声明，函数的声明和定义现在看起来有点脱裤子放屁，但是真正用法是
//函数声明放在.h头文件，定义放在.c源文件
#include "add.h"//引用自己的函数只要用“”就可以，不需要<>

int main()
{
	int a = 20;
	int b = 10;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//int Add(int a, int b)//函数定义
//{
//	int c = a + b;
//	return c;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数返回类型为打印的字符数；
//	return 0;
//}




//int main()
//{
//	//int len = 0;
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//链式访问
//
//	return 0;
//}


//void Add(int*p)//不需要返回值，就用void
//{
//	(*p)++;//++优先级比较高，会先对p做运算，然后*再做运算
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}




//int day(int x)
//{
//	switch (x)
//	{
//	case 1:
//		return 1;
//	case 2:
//		return 2;
//	case 3:
//		return 3;
//	case 4:
//		return 4;
//	case 5:
//		return 5;
//	case 6:
//		return 6;
//	case 7:
//		return 7;
//	default:
//		return -1;
//		break;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int d = 0;
//	scanf("%d", &a);
//	d = day(a);
//	if (d == -1)
//	{
//		printf("输入错误\n");
//	}
//	else if (d == 7)
//	{
//		printf("今天是星期天\n", d);
//
//	}
//	else
//	{
//		printf("今天是星期%d\n", d);
//
//	}
//	return 0;
//}



                         //本质上ch是一个指针
//int binary_search(int x,int ch[],int sz)
//{
//	int l =0;
//	int r =  sz- 1;
//	while (l<=r)
//	{
//		int mid = (r + l) / 2;
//
//		if (ch[mid] > x)
//		{
//			r = mid - 1;
//		}
//		else if (ch[mid]<x)
//		{
//			l = mid + 1;
//		}
//		else
//		{
//			return mid;//注意，return相当于返回一个值，并终止程序，在此处的作用相当于break
//		}
//	}
//	return -1;
//	
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
//	int a = 0;
//	scanf("%d", &a);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret=binary_search(a, arr,sz);//数组传参的时候仅仅是传数组的第一个元素地址
//
//	if (ret == -1)
//	{
//		printf("此数字不在数组里\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
//
//	}
//	return 0;
//}

//int leap_year(int x)
//{
//	if (x % 400 == 0)
//	{
//		return 1;
//	}
//	else if (x % 4 == 0 && x % 100 != 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	leap_year(a);
//	if (leap_year(a) == 1)
//	{
//		printf("%d年是闰年\n", a);
//	}
//	else
//	{
//		printf("%d年不是闰年\n", a);
//	}
//	return 0;
//}








//int is_prime(int x)//素数返回1，否则返回0
//{
//	int y = 0;
//	if (x == 1)
//	{
//		return 0;
//	}
//	else if (x==2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (y = 2; y <= sqrt(x); y ++)
//		{
//			if (x%y == 0)
//			{
//				return 0;
//				break;
//			}
//		}
//		if (y > sqrt(x))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int a = 0;
//	printf("请输入一个数，求这个1到这个数之间的素数>:");
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d,", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//
//






//int main()
//{
//	int a = 20;
//	int*pa = &a;
//	*pa = 10;
//	printf("%d\n", a);
//	return 0;
//}


//当实参传给形参时，形参是实参的一份拷贝。对形参的修改不会影响实参的值
//void swap(int x, int y)//xy是形参，只在函数中有用，用完销毁
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//swap2(int*pa, int*pb)//pa，pb分别得到ab的地址，然后解引用//papb是形参//传址调用可以使函数内部改变函数外部的值
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 9;
//	int b = 20;//ab有自己的地址
//	printf("a= %d ,b=%d\n", a, b);
//	//swap(a, b);//swap函数的内存和ab不是同一个//传值调用
//	swap2(&a, &b);//利用指针来完成，传ab的地址，即指针变量//ab都是实参,有确切的值//传址调用
//	printf("a= %d ,b=%d\n", a, b);
//	return 0;
//}


//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	{
//		return y;
//	}
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(10, 62);
//	printf("max=%d\n", max);
//	return 0;
//}





//函数的基本组成：返回类型ret_type、函数名fun_name、函数参数para1
//基本格式
//ret_type fun_name(para1, *)
//{
//	statement;//语句项，｛｝内的是函数体
//}





//memset内存设置

//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, '*', 5);//中间的参数是ASCII码值对应的字符
//	printf("%s\n", arr1);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "##########";
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//\0作为字符串结束标志，printf打印到\0就不打了
//	return 0;
//}



