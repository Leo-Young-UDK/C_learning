#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//指针的主题，我们在初级阶段的《指针》章节已经接触过了，我们知道了指针的概念：
//1. 指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
//2. 指针的大小是固定的4 / 8个字节（32位平台 / 64位平台）。
//3. 指针是有类型，指针的类型决定了指针的 + -整数的步长，指针解引用操作的时候的权限。
//4. 指针的运算

//int main()
//{
//	const char *p = "abcdef";//“abcdef”是一个常量字符串
//	*p = 'W';//内存访问非法，代码会崩溃
//	//printf("%c\n", *p);//a
//	//printf("%s\n", p);//abcdef
//	printf("%s\n", p);
//	return 0;
//}

//segmentation fault段错误

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char *str3 = "hello bit.";
//	const char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//不同的内存
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");//常量字符串，不能被修改，所以地址是一样的，是同一个事物
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}
//《剑指offer》

//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 2, 4, 3, 4, 5 };
//	int arr3[5] = { 0, 2, 6, 4, 8 };
//	int *prr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (size_t i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (size_t j = 0; j < 5; j++)
//		{
//			printf("%d ", *(prr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int *p=&arr；arr是数组，p是整型值，这个写法是错误的不能存放数组指针，只能存放首元素的指针。int(*p)[10]=arr的写法才是正确的

//int(*p)[10];
//解释：p先和*结合，说明p是一个指针变量，然后指着指向的是一个大小为10个整型的数组。所以p是一个指针，指向一个数组，叫数组指针。
//这里要注意：[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合。

//注意！存放指针的数组和数组指针不是一个概念，前者是数组，后者是指针，指针指向的是数组

//int main()
//{
//	char*arr[5];
//	char*(*pa)[5] = &arr;
//	//char*说明pa指向的数组的元素类型是char*
//	//（*pa）中，*说明pa是指针，pa是指针变量的名字
//	//[5]说明pa指向的数组是5个元素的
//	//int 类似
//	return 0;
//}

//int main()//数组指针不是这样用的
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = &arr;
//	int i = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (size_t i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa+i));//*pa==arr
//	//}
//
//
//	/*for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8 };
//	//int *p = arr;这个整型的指针步长为1
//	//printf("%d\n", p);//arr的地址
//	//printf("%d\n", *p);//解引用arr的地址，即数组首元素1
//	//printf("%d\n", *p);//解引用arr的地址，即数组首元素1
//	//printf("%d\n", *(p+6));//解引用arr中最后一个元素的地址,即由于数组元素地址顺序排列，直接按位加即可，即数组最后一个元素8
//	int(*pa)[7] = arr;//存放的是一个数组的指针，这个数组的指针步长为7
//	printf("%d\n", pa);//数组地址
//	printf("%d\n", *pa);//元素地址
//	printf("%d\n", **pa);//元素
//
//	return 0;
//}

////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (size_t i = 0; i < x; i++)
//	{
//
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
////参数是指针形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (size_t i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//p是数组指针，步长为5，指向二维数组的第一行的地址
//			//p+1是第二行的地址
//			//*(p+1)解引用，由于数组地址的下一级是数组元素的地址，所以这里指第二行每列元素的地址
//			//*(p+1)+1，这里指第二行第一列元素的地址
//			//*(*(p+i)+j)，解引用，由于已经是元素地址了，再解引用返回的就是元素本身
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	//int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 5, 8, 3, 6 }, { 9, 6, 5, 4, 2 } };
//	//print1(arr, 3, 5);//数组名是首元素地址
//	//print2(arr, 3, 5);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//四种等价
//	}
//
//
//
//
//
//	return 0;
//}
//int arr[5];arr是5个元素的整型数组
//int *parr1[10];parr1是数组，10个元素，元素类型是int*，是指针数组
//int(*parr2)[10];parr2是指针，该指针指向了一个数组，该数组有10个元素，每个元素的类型是int，parr2是数组指针
//int(*parr3[10])[5];parr3是数组，其存放的元素类型是int(*  )[5]，即其每个元素是数组指针，因此parr3是存放数组指针的数组
//parr3是数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int

//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int *arr)//ok
//{}
//void test2(int *arr[20])//ok
//{}
//void test2(int **arr)//ok
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

//void test(int arr[3][5])//ok
//{}
//void test(int arr[][])//不ok，只能省略航，不能省略列，因为这样就不能确定指针的步长
//{}
//void test(int arr[][5])//ok
//{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。

//void test(int *arr)//不ok，arr是二维数组，其首元素地址是第一行的地址，即二维数组相当于行数个元素的一位数组，因此这个地址即指针应该是数组指针
//{}
//void test(int* arr[5])//不ok，实际是一个存放指针的数组；存放的每个元素是一个整型指针，而不是数组指针
//{}
//void test(int(*arr)[5])//ok
//{}
//void test(int **arr)//不ok，二级指针是存放一级指针的，而不是存放数组指针的
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
//#include <stdio.h>
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//void test1(int *p)
//{}
////test1函数能接收什么参数？整型指针
//void test2(char* p)
//{}
////test2函数能接收什么参数？字符指针


//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//void test(char **p)
//{
//}
//int main()
//{
//	char c = 'b';
//	char*pc = &c;
//	char**ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//ok
//	return 0;
//}


//函数指针，指向函数的指针
//&函数名 与 函数名 都是函数的地址

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = Add;
//	printf("%d\n", (*p)(2, 6));
//	return 0;
//}

//void Point(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Point;//将变量名去掉，即变量名返回的类型，void(* )(char*)
//	(*p)("hello bit");
//	return 0;
//}

//代码1
//(*(void(*)())0)();void(*)()函数指针类型；(void(*)())0 将0强行转换为地址；*(void(*)())0解引用这个地址，
//(*(void(*)())0)();调用这个地址的函数 - 调用0地址处的该函数

//代码2
//void(*signal(int, void(*)(int)))(int);
//void(*     )(int) 函数指针
//signal(int, void(*)(int))函数
//int, void(*)(int)；是两个参数，一个整型，一个函数指针
//void(*     signal(int, void(*)(int))    )(int);
//typedef void(* pfun_t )(int) //将void(*     )(int)这个类型起名为pfun_t，因为变量名是在括号里面的
//typedef unsigned int uint；与其类似，unit是unsigned int的变量名
//则void(*signal(int, void(*)(int)))(int)可以化简为pun_t signal(int,pun_t)
//
//signal是一个函数声明，其参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针；该函数指针指向的函数的参数是int，函数的返回类型是void
//


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(2, 6));
//	//printf("%d\n", (p)(2, 6));
//	//printf("%d\n", (*p)(2, 6));
//	//printf("%d\n", (**p)(2, 6));
//	//printf("%d\n", (***p)(2, 6));//四个形式的结果一样
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int* a[5] ;
//	int(*p)(int, int) = Add;
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 6));
//	}
//	return 0;
//}


//int(*parr1[10])();函数指针的数组
//int *parr2[10]();语法错误
//int(*)() parr3[10];语法错误


//char*my_strlen(char*dest, char*src);
////1.写一个函数指针pf，能够指向my_strlen
////2.写一个函数指针数组pfArr，能够存放4个my_strlen函数的地址
//
//char*(*pf)(char*,const char*);
//char*(*parrArr[4])(char*,const char*);

//计算器

//void menu()
//{
//	printf("**********************************\n");
//	printf("******   1.add    2.sub  *********\n");
//	printf("******   3.mul    4.div  *********\n");
//	printf("******   5.XOR           *********\n");
//	printf("**********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int XOR(int x, int y)
//{
//	return x^y;
//}

//void Calc(int(*p)(int, int))//回调函数，收到函数地址，再调用函数，减少代码冗余问题
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//
//			break;
//		case 4:
//			Calc(Div);
//
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[6])(int, int) = {0, Add, Sub, Mul, Div,XOR };
//	//pfArr是一个函数指针数组 - 转移表
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int(*pfArr[4])(int, int);
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//int(*(*ppfArr[])[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向数组的每个元素的类型是一个函数指针int(* )(int, int)
//	return 0;
//}

//void print(char*str)//print被称为回调函数，p调用print函数的机制被称为回调机制
//{
//	printf("hehe:%s\n", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}




//#include<stdlib.h>
//#include<string.h>
//
////qosrt函数的使用者得实现一个比较函数,可以排序任意类型的数据
////快速排序
////void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
////
////void*类型的指针可以接收任意类型的地址，但是不能够进行解引用操作，因为其步长不能确认，因此也不能进行+-整数操作
////
////
////
//int int_cmp(const void * p1, const void * p2)//比较两个整型值
//{
//	return (*(int *)p1 - *(int *)p2);//强制转换空指针为整型指针，然后再解引用
//}
//
//void test1()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_float(const void * p1, const void * p2)//比较两个浮点数值
//{
//	//if (*(float *)p1 == *(float *)p2)
//	//	return 0;
//	//else if (*(float *)p1 > *(float *)p2)
//	//	return 1;
//	//else
//	//	return -1;
//	return((int)(*(float *)p1 - *(float *)p2));
//}
//
//void test2()
//{
//	float arr[] = { 1.3, 3.6, 5.2, 7.0, 9.7, 2, 4, 6, 80.2, 0.2 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof (float), cmp_float);
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%f ", arr[i]);
//	}
//	printf("\n");
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void * p1, const void * p2)//比较两个结构体整型值
//{
//	return (((struct Stu *)p1)->age - ((struct Stu *)p2)->age);
//}
//
//int cmp_stu_by_name(const void * p1, const void * p2)//比较两个结构体字符串值
//{
//	return strcmp(((struct Stu *)p1)->name , ((struct Stu *)p2)->name);//相当于两个字符串做减法
//}
//void test3()
//{
//	struct Stu arr[3] = { { "张三", 20 }, { "lisi", 19 }, { "wangwu", 18 } };
//
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof (arr[0]), cmp_stu_by_age);
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}




////模仿qsort
//#include <stdio.h>
//#include<string.h>
////int cmp_char(const void * p1, const void * p2)//比较两个结构体字符串值
////{
////	return strcmp((*(char *)p1) , (*(char *)p2));//相当于两个字符串做减法
////}
//int int_cmp(const void * p1, const void * p2)
//{
//	return (*(int *)p1 - *(int *)p2);
//}
////void _swap(char *p1, char * p2, int size)
////{
////	int i = 0;
////	for (i = 0; i< size; i++)
////	{
////		char tmp = *p1;
////		*p1 = *p2;
////		*p2 = tmp;
////		p1++;
////		p2++;
////		//char tmp = *((char *)p1 + i);
////		//*((char *)p1 + i) = *((char *)p2 + i);
////		//*((char *)p2 + i) = tmp;
////	}
////}
//void _swap(void *p1, void * p2, int size)
//{
//	int i = 0;
//	for (i = 0; i< size; i++)
//	{
//		//char tmp = *p1;
//		//*p1 = *p2;
//		//*p2 = tmp;
//		//p1++;
//		//p2++;
//		char tmp = *((char *)p1 + i);
//		*((char *)p1 + i) = *((char *)p2 + i);
//		*((char *)p2 + i) = tmp;
//	}
//}
//void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
//{
//	int i = 0;//趟数
//	int j = 0; 
//	for (i = 0; i< count - 1; i++)
//	{
//		//每一趟比较的趟数
//		for (j = 0; j<count - i - 1; j++)
//		{
//			//两个元素的比较
//			//这里无论什么类型数据都转换成字符指针的逻辑是，指针和字符数据的大小都是一个字节
//			//将指针转为字符指针，则其单位步长为1，步长的倍数又可以通过size来放大。
//			//如果不是char*类型，就有可能出现步长为4，因为数据类型不明确，有可能传过来字符类型
//			//此时这个步长就明显不适合字符类型数据，因为后者的指针步长为1.
//
//			//这个函数的最关键的点是cmp的类型是不同的，因此可以调用不同的函数，对不同数据类型进行比较
//			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)//不同数据结构的指针步数不同，这正是size存在的意义
//			{
//				//两个元素交换
//				_swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//	int i = 0;
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	////一维数组
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4/8，数组名这里表示首元素的值，a+0还是首元素地址，地址的大小就是4/8
//	//printf("%d\n", sizeof(*a));//4/8
//	//printf("%d\n", sizeof(a + 1));//4/8，跳过一个数，a+1是第二个元素地址
//	//printf("%d\n", sizeof(a[1]));//4/8，第二个元素大小
//	//printf("%d\n", sizeof(&a));//4/8
//	//printf("%d\n", sizeof(*&a));//16，数组的地址解引用访问数组，还是数组
//	//printf("%d\n", sizeof(&a + 1));//4/8，&a是数组地址，&a+1跳过整个数组，但还是地址
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//	////字符数组
//	//char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));//6，sizeof数组的大小
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1,首元素是字符
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//printf("%d\n", strlen(arr));//随机值，从首元素地址开始数，直到遇到'\0'
//	//printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//'a' - 97，代码错误，非法访问
//	//printf("%d\n", strlen(arr[1]));//'b' - 98，代码错误，非法访问
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//	////strlen()的参数是地址或者说指针变量
//	//char arr2[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8，跳过整个数组后的地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//'a' - 97，代码错误，非法访问
//	//printf("%d\n", strlen(arr[1]));//'b' - 98，代码错误，非法访问
//	//printf("%d\n", strlen(&arr));//6，会有警告，但不影响最终结果
//	//printf("%d\n", strlen(&arr + 1));//随机值，因为跳过了一个数组也跳过了'\0'
//	//printf("%d\n", strlen(&arr[0] + 1));//5，从第二个元素开始数，到'\0'停止
//	//char *p = "abcdef";
//	//printf("%d\n", sizeof(p));//4/8
//	//printf("%d\n", sizeof(p + 1));//4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1，*(p+0)=p[0]
//	//printf("%d\n", sizeof(&p));//4/8
//	//printf("%d\n", sizeof(&p + 1));//4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//'a' - 97，代码错误，非法访问
//	//printf("%d\n", strlen(p[0]));//'b' - 98，代码错误，非法访问
//	//printf("%d\n", strlen(&p));//随机值，指针的地址不知道后面哪个是‘\0’
//	//printf("%d\n", strlen(&p + 1));//随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	////二维数组
//	//int a[3][4] = { 0 };//初始化第一个，后面的全是0
//	//printf("%d\n", sizeof(a));//48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16，a[0]是二维数组的第一行数组名，一共有四列（四个元素）,相当于单独放在sizeof（）内，计算第一行的大小
//	//printf("%d\n", sizeof(a[0] + 1));//4，a[0]是二维数组的第一行数组名，数组名此时是首元素的地址，a[0]+1是第一行第二个元素的地址
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4，第一行第二个元素的大小
//	//printf("%d\n", sizeof(a + 1));//4，a是二维数组的数组名，没有sizeof（数组名），也没有&（数组名），所以a是首元素地址
//	////而把二维数组看做是一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址，a+1就是第一行（首元素）的地址
//	//printf("%d\n", sizeof(*(a + 1)));//16
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8，还是第二行的地址
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16，第二行地址解引用，是第二行数组的大小
//	//printf("%d\n", sizeof(*a));//16，a是首元素的地址 - 是第一行的地址，*a - 第一行地址解引用，是第一行数组的大小
//	//printf("%d\n", sizeof(a[3]));///16，sizeof并不参与运算，只会根据类型判断大小。a是二维数组，a[3]是二维数组（不存在）的第四行，大小还是16
//	//return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//&a + 1是数组地址后面的那个地址，然后将这个地址强制转类型为整型地址，
//	printf("%d,%d", *(a + 1), *(ptr - 1));//这个地址减一就是第5个元素的地址
//	//写代码的三种境界
//	//看代码是代码
//	//看代码是内存
//	//看代码是代码
//	return 0;
//}
////程序的结果是什么？2,5


//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
////0x100000是十六进制
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100014，p+1是几取决于p的类型，p是结构体指针
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001，将p强行转换类型为无符号长整形，然后再加一，
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004，将p强行转换类型为无符号整形指针，步长变为4，加一跳一步，
//	//指针+-运算取决于指针类型
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);//(int)a + 1，字面意义上加1，向前走一个字节，但是int是4个字节，所以是第一个元素的前一个字节
//	printf("%x,%x", ptr1[-1], *ptr2);//4,ptr1[-1]=*(prt1-1);2000000，向前走一个字节
//	//内存为01 00 00 00 | 02 00 00 00 -> 00 00 00 02 ->小端储存->02 00 00 00->2000000
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式，最终结果为{1,3,5}
//	int *p;
//	p = a[0];//第一行的地址，首元素的地址
//	printf("%d", p[0]);//1，或者p[0]=a[0][0]
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//有警告指针数组类型下标不同，指针数组里面仅含有4个元素
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]=*(*(p+4)+2)，实际上应该是a[3][3]元素，因此指针相减得到的整型为-4，但是指针本身
//	//%p打印的是补码的直接值的十六进制（即内存位置），而%d打印的是补码对应的原码的十进制
//	//10000000000000000000000000000100
//	//11111111111111111111111111111011
//	//11111111111111111111111111111100->ff ff ff fc->fffffffc
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1)); //(aa + 1)等价于aa[1],是第二行的地址，即第二行第一个元素地址，解引用是6；ptr2是整型指针
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10，5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };//字符指针数组，a的地址是首元素地址
//	char**pa = a;//二级指针，指向指针数组的指针，指针类型为字符指针，步长为1，此外pa指向指针数组首元素地址
//	pa++;//步长为1，跳过一个指针，变成指针数组第二个元素地址
//	printf("%s\n", *pa);//指针数组第二个元素地址解引用
//	return 0;
//}


//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };//指针数组，存放这三个字符串（字符数组）的首地址
//	char**cp[] = { c + 3, c + 2, c + 1, c };//指针数组里的元素指针倒着放
//	char***cpp = cp;//指针数组cp的首地址
//	//原字符串组   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4  <-  &cp1
//	//"NEW"   <-  c2 <-  &c3
//	//"POINT" <-  c3 <-  &c2
//	//"FIRST" <-  c4 <-  &c1
//	//注意，字符串是字符数组，在使用printf打印字符串的时候，输入的是数组名，即数组的首元素地址，即输入地址，遇到'\0'停下不打印
//	printf("%s\n", **++cpp);//先++再解两次引用，指针调到c3处，三级指针解引用两次，是"POINT"的地址，因此输出POINT；注意!此时cpp已经发生改变
//	//原字符串组   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4
//	//"NEW"   <-  c2 <-  &c3  <-  &cp2
//	//"POINT" <-  c3 <-  &c2
//	//"FIRST" <-  c4 <-  &c1
//	printf("%s\n", *--*++cpp + 3);//cpp先++，再解引为&c2；&c2先--为&c1，再解引用拿到"ENTER"的首地址;"ENTER"是字符数组，首元素地址是'E'的地址
//	//最后跳过三个地址，到第二个'E'的地址，因此打印从第二个E开始打印，结果为ER；注意!此时cp已经发生改变
//	//原字符串组   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4
//	//"NEW"   <-  c2 <-  &c3
//	//"POINT" <-  c3 <-  &c1  <-  &cp3
//	//"FIRST" <-  c4 <-  &c1
//	printf("%s\n", *cpp[-2] + 3);//cpp[-2]=*(cpp-2)，跳到&cp1的地址再解引用为&c4；&c4再解引用为c4，即"FIRST"的首字母的地址，
//	//再+3从S开始打印，最终结果为ST；注意，此时并非赋值操作，即非++，因此cpp维持&cp3地址不变，cp维持不变
//	//原字符串组   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4  <-  &cp1（打印）
//	//"NEW"   <-  c2 <-  &c3
//	//"POINT" <-  c3 <-  &c1  <-  &cp3
//	//"FIRST" <-  c4 <-  &c1
//	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]=*(*(cpp-1)-1)+1，cpp跳到&cp2然后解引用为&c3；即cp目前指向c3，
//	//cp再往前跳一步，指向c2，再解引用为c2；即"NEW" 的首字母的地址，再+1从E开始打印
//	//最终结果为EW
//	//原字符串组   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4
//	//"NEW"   <-  c2 <-  &c3  <-  &cp2（打印）
//	//"POINT" <-  c3 <-  &c1  <-  &cp3
//	//"FIRST" <-  c4 <-  &c1
//	return 0;
//}

//输入字符串，使之倒序排列
//void reverse(char* arr)
//{
//	assert(arr);
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr+len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);//读取整行，空格也读
//	reverse(arr);//中文不行
//	printf("%s\n", arr);
//	return 0;
//}


////计算a+aa+aaa+aaaa+aaaaa前5项和
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	for (size_t i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//求1到10000的自幂数：n 位数，它的每个位上的数字的 n 次幂之和等于它本身；不存在2的自幂数
//例如，水仙花数是3的自幂数153=1^3+5^3+3^3=153
//

//int main()
//{
//	int i = 0;
//	for (size_t i = 0; i <=10000000; i++)
//	{
//		//判断是否为水仙花数
//		//计算i的位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//计算i的每一位n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//比较i==sum
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}

//打印一个的菱形

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	int i = 0;
//	for (size_t i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (size_t j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (size_t j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (size_t i = 0; i < line-1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (size_t j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (size_t j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//
//	return 0;
//}

//喝汽水，一瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水？
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty=empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

//调整整型数组，使奇数全部位于数组前半

//void print(int a[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//void move(int a[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//从左边找偶数
//	while (left<right)
//	{
//		while ((a[left] % 2 == 1) && (left<right))
//		{
//			left++;
//		}
//		//从右边找奇数
//		while ((a[right] % 2 == 0) && (left<right))
//		{
//			right--;
//		}
//		if (left != right)
//		{
//			int tmp = a[left];
//			a[left] = a[right];
//			a[right] = tmp;
//		}
//	}
//
//}
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 10, 7, 8, 91,514,810 ,364};
//	int sz = sizeof(a) / sizeof(a[0]);
//	move(a,sz);
//	print(a, sz);
//	return 0;
//}

//int main()//abcde五人赛前预测，说的话各对了一半
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for ( a = 1; a <= 5; a++)
//	{
//		for ( b = 1; b <= 5; b++)
//		{
//			for ( c = 1; c <= 5; c++)
//			{
//				for ( d = 1; d <= 5; d++)
//				{
//					for ( e = 1; e <= 5; e++)
//					{
//						if (((b==2) + (a==3) == 1) && 
//							((b==2) + (e==4) == 1) && 
//							((c==1) + (d==2) == 1) && 
//							((c==5) + (d==3) == 1) && 
//							((e==4) + (a==1) == 1))
//						{
//							if (a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	//申请空间
//	int *p = (int*)mallo(10 * sizeof(int));
//	//使用空间
//	//......
//	//释放空间
//	free(p);
//	return 0;
//}

//int* fun(int a, int b);//函数声明
//int(*) fun(int a, int b);//err
//int(* fun)(int a, int b);//函数指针
//(int*) fun(int a, int b);//函数声明


//实现一个函数，可以左旋字符串中的k个字符
//ABCD左旋一次得到BCDA，两次得到CDAB

//void left_move(char*arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (size_t i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		int tmp = *arr;
//		int j = 0;
//		for (size_t j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

//2三翻转法
//abcdef
//ab cdef切开
//ba fedc各自倒序
//cdefab整体倒序

//void reverse(char*left, char*right)//穷举
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}


//void left_move(char*arr, int k)
//{
//
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k<=len);
//
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
//}
//
//int is_left_move(char*s1, char*s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for ( i = 0; i <len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//
//}
//abcdefabcdef左旋几位就向右移动几位，只取字符串长度个字符

//int is_left_move(char*s1, char*s2)
//{
//	
//	//1.在字符串1中添加多一串字符串
//	//strcat
//	//strncat
//	//strcat(s1, s1);//err
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1!=len2)
//	{
//		return 0;
//	}
//	strncat(s1, s1,len1);
//
//	//2.判断str2指向的字符是否为str1指向的字符串子串
//	//strstr找子串的
//	char*ret = strstr(s1, s2);//返回类型是指针
//	if (ret==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//
//int main()
//{
//	char arr1[30]= "abcdef";
//	char arr2[]= "cdefab";
//	int ret =is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//
//	printf("%s\n", arr);
//	return 0;
//}

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，从上到下是递减的，编写程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于O(N)，从后向前一个一个数地遍历
//《剑指offer》

int FindNum(int arr[][3], int k,int *px, int *py)//我自己写的代码，可以跑，但是时间复杂度未知;补充，一开始有错，但是我自己debug出来了
{
	int i = 0;
	int j = 0;
	for (size_t i = 0; i < *px; i++)
	{
		for (size_t j = *py - 1; j >= 0; j--)
		{
			if (k > arr[i][j])
				break;
			else if (k == arr[i][j])
			{
				*px = i;
				*py = j;
				return 1;
			}
			else
			{
				;
			}
		}
	}
	return 0;
}

//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<=row-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			printf("下标是%d %d\n", x, y);
//			return 1;
//		}
//	}
//	return 0;
//
//}

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//
//}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 114 } };
	int k = 113;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, &x, &y);
	if (ret==1)
	{
		printf("找到了\n");
		printf("%d %d", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}



