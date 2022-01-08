#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0x1234abcd;//正在内存里面倒着放，cdab3412
//	//int *pa = &a;//a的指针或者地址是0x004ff838
//	char *pc = &a;//指针类型发生了变化后，解引用操作后，只改了一个字节的内存
//	//指针类型决定了指针进行解引用的时候能够访问的空间大小
//	*pc = 0;//a的内存变成了00 ab 34 12
//	return 0;
//}

//演示实例
//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//字符指针跳1个字节
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);//整型指针跳4个字节
//	//指针类型决定了指针类型加一向前跳过几个字节
//	//指针类型决定了：指针走一步走多远（指针的步长）
//	//比如说，我整型指针对应申请了4个字节，第一个字节的地址为x，则下一个整型，需要跳过这四个字节
//	//因为一个字节对应一个地址，下一个数据的地址应该是这个地址的长度加上这个类型的字节长度
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//int*p = arr;
//	char *p = arr;
//	int i = 0;
//	for (i= 0; i<10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a;
//	int *p;//局部变量指针为初始化，默认为随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}//出来后a被销毁，a对应的指针对应的内存还给了计算机，p对应的指针并不是a原来的地址
//
//int main()
//{
//	int *p = test();
//	*p = 20;//想使用的内存空间已经不是自己的了
//	return 0;
//}

//避免野指针
//1. 指针初始化//int*p=NULL;
//2. 小心指针越界
//3. 指针指向空间释放,就让指针指向空NULL//p=NULL;
//4. 避免返回局部变量的地址
//5. 指针使用之前检查有效性

//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	*pa = 20;
//	//int p = NULL;//真的不知道指针该指向谁时，类似int a=0;用于初始化指针，给指针赋值;NULL=0x00000000,不可访问
//	//
//	//pa = NULL;//假设pa指针用完了，已经不想用它了，就指向空，则pa没有指向任何有效空间了，则其不会干扰a。
//	//*pa = 10;
//	if (pa!=NULL)//5. 指针使用之前检查有效性
//	{
//		//使用指针
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3 ,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int*p = &arr[9];
//	//printf("%d\n", sz);
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 1;//p++也行
//	//}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//由于是后++，所以让步给前面的*再++，即先对*vp赋值为0，然后再对vp进行++操作,事实上应该分为下面两步更为明确
//		//*vp = 0;
//		//vp++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%s\n", &arr[9] - &arr[0]);//指针减去指针为中间的元素个数，本质来讲，地址本身是指针变量，其字节代表一定的整型
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)//指针的关系运算这种写法大部分都能运行，但是应该避免这种写法，标志并不能保证它可行
//	//{
//	//	*vp = 0;
//	//}
//	//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与
//	//指向第一个元素之前的那个内存位置的指针进行比较。
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}

//5. 指针和数组
//两个例外，&arr[0],sizeof(arr),这两个都表示整个数组

//既然可以把数组名当成地址存放到一个指针中，我们使用指针来访问一个就成为可能。
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);//结论，p+i在此处是&arr[i]，前者更方便解引用
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int **ppa = &pa;//ppa是二级指针,还有二级以上的，方法相似
//	printf("%d\n", **ppa);//a=10
//	return 0;
//}

//指针数组是数组-存放指针的数组
//数组指针是指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int*pa = &a;
	//int*pb = &b;
	//int*pc = &c;
	int*arr[3] = { &a, &b, &c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}


	return 0;
}
