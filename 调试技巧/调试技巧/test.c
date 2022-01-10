#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%\d ", i);
//	}
//	system("pause");
//
//	return 0;
//}
//debug调试，可以调试，因为包含了调试信息，并不做优化
//release发布，方便运行

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//F5启动调试，和F9配合使用

//F9断点，切换断点
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%\d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%\d ", 10-i);
//	}
//	system("pause");
//
//	return 0;
//}

//F10组过程，将函数当做一个过程，不看函数执行


//int main()
//{
//	{
//		int tmp = 0;
//		printf("%d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}
//
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//1！+2！+3！的错误例子，调用观察
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//栈区先使用高地址空间，再使用低地址空间
//数组随着下标的增长，地址是由低到高变化
//vs2013下，当i <=11，会停顿，然后会报错；但死循环中没机会停下来报错，如果有机会停下来会报错
//gcc编译器下，i<=11死循环
//vc6.0环境下，i<=10死循环
//不同的机器下内存的布局有所差异，分配空间时会有所差异
//当把i初始化放在数组初始化下面，不会死循环，但是会报错

//debug版本，i地址高于arr
//release版本,i地址低于arr，地址优化，内存分布结构都会变化

//void my_strcpy(char* dest, char*src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//\0
//}

//void my_strcpy(char* dest, char*src)//优化
//{
//	while (*src != '\0')
//	{
//		*dest ++= *src++;//将++操作往后搁置，先使用赋值再进行++
//	}
//	*dest = *src;//\0
//}

//void my_strcpy(char* dest, char*src)//优化2
//{
//	if (dest != NULL&&src != NULL)
//	{
//		while (*dest++ = *src++)//\0的ASCII码值为0
//		{
//			;
//		}
//	}
//
//}

//#include<assert.h>
//
//void my_strcpy(char* dest, char*src)//优化3
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言，为假会报错
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//#include<assert.h>
//
//void my_strcpy(char* dest,const char*src)//优化3//源头数据不能改
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言，为假会报错
//
//	while (*src++ = *dest++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	//strcpy字符串拷贝
//	char arr1[] = "#####################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);//如果传址为空，程序会崩盘，其他功能也可能有问题，所以要避免传参错误
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;//被修饰了，语法上num不允许改
//	int *p = &num;
//	*p = 20;
//	printf("%d\n", num);//但num改了
//	return 0;
//}

//int main()
//{
//	const int num = 10;//被修饰了，语法上num不允许改
//	//const int *p = &num;//const修饰指针变量
//	//*p = 20;//error，const放在指针变量的*左边时，修饰的是*p，也就是说，不能通过p来改变*p（num）的值；但是能够改变p的地址
//	//如果const放在*的右边，修饰的是p，p不允许被改变
//	//int *const p = &num;//const修饰指针变量
//	//int n = 120;
//	//p = &n;
//	printf("%d\n", num);//但num改了
//	//const放在*的左边，修饰的是*p，也就是说，不能通过p来改变*p（num）的值
//	//const放在*的右边，修饰的是指针变量本身，就是p不能被改变了
//	//const int *const p = &num//p和*p啥都不能干
//	return 0;
//}

//#include<assert.h>
//
//char* my_strcpy(char* dest,const char*src)//优化4，返回目标的地址
//{
//	char *ret = dest;
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	assert(dest != NULL);
//	assert(src != NULL);//断言，为假会报错
//
//	while (*dest++ = *src++ )
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy字符串拷贝
//	char arr1[] = "#####################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问，直接传回地址
//
//	return 0;
//}

//#include<assert.h>
//int my_strlen(const char *arr)
//{
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int **p;
//	int arr[4] = {1,9,3};
//	p = arr;
//	//p = &q;
//	//printf("%d\n", *p + 1);
//	//printf("?\n");
//	//printf("%d\n", *(*p+1));
//
//	return 0;
//}

