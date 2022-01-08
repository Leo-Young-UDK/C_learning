#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print("num");
//	return 0;
//}

int i;//全局变量，不初始化，默认为0
int main()
{
	i--;
	if (i > sizeof(i))//sizeof是无符号数，字节为4，优先级高于整型，i=-1也会替换成无符号数，其补码全为1，无符号数非常大
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}




