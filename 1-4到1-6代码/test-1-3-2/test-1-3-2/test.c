#define _CRT_SECURE_NO_WARNINGS 1//声明，不使用不安全报错。加在源文件的第一行,声明后面不用加分号


#include<stdio.h>
#include<string.h>


//int main()
//{
//	int line =0;
//	printf("加入比特\n");
//
//	while(line<2000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line ++;
//	}
//	if(line>=2000)
//		printf("offer");
//	return 0;
//}

	




//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）:");
//	scanf("%d",&input);
//	if(input==1)
//		printf("offer");
//	else
//		printf("shit");//选择语句
//	return 0;
//}




//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	//\32--32是2个8进制数字
//	//32作为8进制的那个十进制数字，作为ASCII码值，对应的字符，因此此处\32代表着一个字符，同理，\t也是一个字符
//	//32--10进制 26 --作为ASCII码代表的字符
//	printf("%c%c%c\n",'\23','\132','\x60');
//	return 0;
//}
////代码比较难懂的可以加注释，或者不需要的可以注释掉
//
//



//int main()
//{
//	printf("abc\n223");
//	printf("abcn\t223\n");//三字母词: ??+]
//	printf("%c","b");
//	return 0;
//}




//int main()
//{
//	char arr1[]="abc";//数组
//	//"abc" -- 'a','b','c','\0'--字符串结束标志
//	char arr2[]={'a','b','c'};
//	char arr3[]={'a','b','c',0};
//	char arr4[]={'a','b','c','\0'};
//	//如果后面没有0，则随着打印一些字符串
//	//'a'--97,'\0'--0
//	//ASCII 码值
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr3);
//	printf("%s\n",arr4);
//	printf("%d\n",strlen(arr1));//strlen字符串长度,斜杠0不算在内，只是标志
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",strlen(arr3));
//	return 0;
//}


//转义字符，转变原来的意思









//枚举关键-enum
//enum Sex
//{
//	MALE ,
//	FEMALE,
//	SECRET
//};//有分号
//
//int main()
//{
//	enum Sex sex = MALE;//枚举常量不能改变
//	sex=FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//	printf("%c\n",sex);
//
//	return 0;
//}

//双引号内为字符串














//#define MAX 211

//int main()
//{
//	int arr[MAX]={0};
//	printf("%d\n",MAX);
//	return 0;
//}









//int main()
//{
//
//	//const int num=4;//const修饰的常变量，const常属性.本身是变量，但是具有常属性，所以是常变量。
//	//printf("%d\n",num)
//	////10;
//	//printf("c= %d\n",c);
//	return 0;
//}
//



int Add(int x, int y)//后面跟的大括号为函数体，完成任务，前面的int为函数Add的返回类型，自定义函数方便代码复用
{
	int z =x+y;
	return z;
}

//数组，一组相同类型元素的集合
//
//int main()
//{
//	int a = 0;
//	int b=1;
//	int sum =2;
//	scanf("%d%d",&a,&b);//scanf_s是VS编译器提供的，因此不具有跨平台性或可移植性，尽量不要使用
//	//sum =a+b;
//	sum=Add(a,b);//函数
//
//
//	printf("sum= %d\n",sum);
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};//定义一个存放10个整数数字的数组,下标从0开始算起，‘1’对应的下标是0，‘0’对应的下标是9.
//	char ch[5];
//	int i=0;
//	while(i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//
//
//
//	//printf("%d\n",arr[4]);//下标形式访问元素 #5
//	return 0;
//}

//int main()
//{
//	int a =1;
//	//整型1占4个字节32个比特位
//	//00000000000000000000000000000001-->00000000000000000000000000000010左移
//	int b=a<<4;
//	printf("%d\n",b);
//	return 0;
//}

//位操作^按位异或、&按位与、|按位或，2进制

//int main()
//{
//	int a=3;//   011
//	int b=5;//   101
//	int c=a&b;// 001-->1十进制
//	int d=a|b;// 111-->7
//	int e=a^b;// 110-->6异或，对应的二进制位相同，则为0，相异为1
//	printf("%d\n",c);
//	printf("%d\n",d);
//	printf("%d\n",e);
//	return 0;
//}

//int main()
//{
//	int a=3;//   011
//	a=20;
//	a=a+10;
//	a+=10;//符合赋值法
//	printf("%d\n",a);
//	return 0;
//}

//单目操作符，双目操作符，三目操作符

int main()
{
	int a=3;
	int b=5;
	int arr[10]={0};//10个整型，一共40
	int sz=0;
	sz=sizeof(arr)/sizeof(arr[1]);
	a+b;//+号为双目操作符，左右两个变量
	printf("%d\n",a);
	printf("%d\n",!a);//逻辑反操作，！为单目操作符，-负号为单目，+正号可以省略的单目
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof a);//sizeof计算变量或者类型所占的空间大小，单位是字节
	printf("sz=%d\n",sz);//计算数组个数的方法
	return 0;
}