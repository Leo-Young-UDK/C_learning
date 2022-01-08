#define _CRT_SECURE_NO_WARNINGS 1//define是指令不是关键字

#include<stdio.h>

#include<string.h>




//结构体，人是复杂对象，用结构体来描述，是我们自己创造的结构体

struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言",55 };
	strcpy(b1.name, "C++");//string copy-字符串拷贝-库函数-string.h
	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	////printf("书名：《%s》\n", (*pb).name);
	////printf("价格：%d元\n", (*pb).price);

	printf("书名：《%s》\n", b1.name);
	printf("价格：%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d元\n", b1.price);
	return 0;
}

//
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));//只要是指针变量，则其字节大小只与操作系统位数有关，32bit-4，64bit-8
//	return 0;
//}



//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc));
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址，指针变量是用来存放地址的
//	printf("%d\n", a);
//	printf("%d\n", &a); //17824152
//	printf("%p\n", &a);//0095F8AC
//	printf("%p\n", p);
//	*p=20;//* - 解引用操作符
//	printf("%d\n", a);//20
//	return 0;
//}


////#define MAX 100//定义标识符常亮，可以定义宏带参数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//#define MAX(X,Y) (X>Y?X:Y)//宏的定义
//int main()
//{
//	int a = 10;
//	int b = 98;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}







//extern int Add(int, int);
//int main()
//{
//	int a=2;
//	int b = 9;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);//static改变了函数的链接属性，外部链接变为内部链接
//	return 0;
//}




//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);//static改变了变量的作用域，所静态的全局变量只能在自己所在的源文件内使用
//	return 0;
//}




//void test()
//{
//	//int a = 1;//a是一个局部变量,每次出去都会销毁
//	static int a = 1;//a是一个静态的局部变量，static修饰局部变量的生命周期变长
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}




//
//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int a = 20;
//	u_int b = 20;
//
//	return 0;
//}




//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]下标应用操作符
//	int a = 10;
//	int b = 2;
//	int sum = Add(a, b);//()函数调用操作符
//	return 0;
//}






//int main()
//{
//	//exp1? exp2:exp3,若exp1为真，则为exp2，否则为exp3，三目操作符，类似excel的if函数
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	if (a > b)
//		max = a;
//	else
//	{
//		max = b;
//	}
//	printf("max=%d\n", max);
//	return 0;
//}



//int main()
//{
//	//真-非0
//	//假-0
//	//&&逻辑与，||逻辑或，
//	int a = 3;
//	int b = 0;
//	int c = a||b;
//	printf("c=%d\n",c);
//	return 0;
//}

//只要是整数，则内存储存中的都是补码，正数的原码反码补码相同
//关键字register int a =10，建议把a定义成寄存器变量
