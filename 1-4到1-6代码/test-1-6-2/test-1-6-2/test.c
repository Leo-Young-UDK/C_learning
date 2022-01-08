#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	char ch1[] = "wrong";
	if (ch1[1] = 'r')
	{
		printf("OK!\n");
	}
	return 0;
}




//
//int main()
//{
//	int arr[] = { 9, 8, 7, 4, 6, 114, 514, 1919, 810, 364364, 893 };
//	printf("%p\n", arr);//数组名是首元素地址，但有两个例外
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);//数组地址，数组地址加1则跳过数组。所以数组地址和首元素地址数值相同，但意义不同
//	printf("%p\n", &arr+1);//
//	printf("%d\n", *arr);//对首元素名解引用，即对首元素地址解引用，那么结果应该是第一个元素
//	printf("%d\n", sizeof(arr));//1、sizeof（数组名），数组名表示整个数组，sizeof（数组名）表示整个数组大小，单位是字节；
//	//如果sizeof（地址），则由于指针变量是整型大小为4，因此显示为4
//	//2、&数组名，数组名表示整个数组，&数组名取出的是整个数组的地址
//	return 0;
//}




//void bubble_sort(int ch[],int sz)
//{
//	//确定冒泡的趟数；
//	int flag = 1;//假设这一趟已经有序
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (ch[j] >ch[j + 1])
//			{
//				int tmp;
//				tmp = ch[j];
//				ch[j] = ch[j + 1];
//				ch[j + 1] = tmp;
//				flag = 0;//本趟排序数据不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;//此时数组完全有序，不用再排序
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9, 8, 7,4, 6 ,114,514,1919,810,364364,893};
//	//对arr进行排序，排成升序
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);//冒泡排序函数
//	//数组arr传参的时候，传首元素地址
//	//注意，由于传过去的是地址，所以相当于是传址调用，arr中的元素排列结果被改变
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",  arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	//int arr[3][4] = { { 1, 2, 3 }, 4, 5 };//三行四列，像行列式
//	//char ch[5][6];
//	int arr[3][4] = { { 1, 2, 3, 4, }, { 5, 6, 7, 8 } };//[]内的数字不能省略，但像这个时候，可以省略行的数字
//	//二维数组也是通过下标来使用的
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p ;", i,j,&arr[i][j]);//二维数组也是线性排列的
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);//指针相隔4个字节，是因为整型大小为4个字节，数组在内存中是连续的
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//
//
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//abc\0
//	char arr2[] = { 'a', 'b', 'c'};//abc
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15随机值，strlen遇到、0才停止，但abc后面没有\0,它返回一个无符号整型
//	return 0;
//}


//int main()
//{
//	//创建一个数组存放10个整型
//	int arr1[10] = {1,2,3,98};//不完全初始化，后面默认初始化为0
//	char arr2[5] = {'a','a','b',98};//这里b字符的ASCII码值为98
//	//int n = 5;
//	char arr3[5]="abc";
//	char arr4[] = "abcdef";//根据字符串确定大小
//	printf("%d\n", sizeof(arr4));//计算arr4所占的空间大小，包括‘\0’，计算变量、数组、类型、单位是字节，是操作符
//	printf("%d\n", strlen(arr4));//计算字符个数，只能针对字符串，是库文件，得引用头文件
//	return 0;
//}