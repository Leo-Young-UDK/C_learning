#include<stdio.h>


//int main()
//{
//	extern int g_val;
//	printf("%d\n",g_val);
//	return 0;
//}





//int main()
//{
//	int num1 = 20;
//	int num2 = 10;
//	int sum = 0;
//
//	printf("%d\n",num1);
//	scanf("%d%d",&num1,&num2);//输入数据，使用输入函数scanf
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}


//&取地址符号,c语言规定，变量定义要放在代码块前面







//int num2=20;//全局变量-定义在代码块外部的（｛｝是代码块）
//
//int main()
//{
//	int num1=10;//局部变量-定义在代码块内部的（｛｝是代码块）
//	return 0;
//}


//局部变量和全局变量的名字建议不要相同，容易产生误会，产生bug
//当两者相同，局部优先



//int main()
//{
//	short age=20;
//	float weight=65.5;
//	return 0;
//
//}
//
//int main()
//{
//	//char ch='a';//注意字符只有一个位置，并且字符类型和字符串并不是一个概念
//	//printf("%c\n",ch);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}
//  
//%d打印整型十进制，%x十六进制，%o八进制，%c字符，%p地址形式


int main()
{
	char arr[] = { 'a', 'b', 'c' };
	int sz = sizeof("abc");
	printf("%d\n", sz);
	printf("%c\n", arr);

}




//#include <stdio.h>//包含一个stdio.h文件
////std i o 标准输入输出
//
//int main()//主函数-程序的入口，不能没有main函数，有且只有一个
//{
//	extern int g_val;
//	printf("g_val=%d\n",g_val);//未声明的变量
//	
//	return 0;
//}//int 表示main函数调用返回一个整型值
////printf是库函数，要打招呼：#include<>




