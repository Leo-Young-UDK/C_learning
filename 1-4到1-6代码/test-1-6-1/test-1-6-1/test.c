#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "add.h"

//��ŵ�������������ӣ�abc��a�������µ��Ŵ���С�������ӣ��뽫�����Ƶ�c�������ұ�֤�κ�ʱ������������Ӵ�������ġ�
//�ݹ飬�Ƚ������2�����ӷŵ�b�����ϣ��ٽ�a�����ϵ��Ǹ��ŵ�c�����ϣ�Ȼ���ٽ�b�ϵ�һ���ŵ�a�����Ȼ��Ϳ��Խ������
//��չ��n�����ӣ�n�����ӣ�
//����һ��������n-1�����ӣ���˳������һ�����ӷ������������Խ��������ԽС��Ȼ��ӵ��������ӿ�ʼ��
//�����ĸ����ӵĵ��ӷ��ڵ������������棬�����ǵ�5��6��7������ֱ�����һ����
//�ٽ���һ�����ӵ����ӷŵ����һ�������ϡ���ʱ���±��ţ�b�൱�ڵ�һ�����ӣ�����˳λ���У��Դ�����

//������̨�ף�n��̨�ף�����һ�ο�����1��������2��̨�ף��������ж�������������ָoffer��67��������
//0��̨�ף���0�Σ�һ��������1��
//1��̨�ף���һ�Σ�һ��������1��
//2��̨�ף������Σ���������һ�Σ�����������11����2��
//3��̨�ף���111����21����12������
//4(1111)(112)(121)(211)(22)5
//5(11111)(1112)(1121)(1211)(2111)(212)(221)(122)8
//�ܽ���ɣ�쳲���������n-1



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
//쳲��������У���ǰ���������ǰ����������֮��,1 1 2 3 5 8 13 21 34 55...
//int count = 0;
//int fib(int n)//���ڴ˰������ݹ鲢������õķ���,ѭ����Ч�ʸ���
//{
//
//	if (n == 3)//���40����������������3ǧ����Σ�Ч�ʼ���
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 2) + fib(n - 1);//Ч�ʼ��ͣ�Ҫ֪����һ����Ҫ֪�������2����һֱ��2��n�η�����
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
//	//��д������ô�ã���ȥ��д���������ַ�����ΪTDD����������������
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

//int fac1(int x)//�׳�
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




//int my_strlen(char* str)//�ݹ鲻������ʱ����
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
//		str++;//ָ���������ַ����ַ��һ��
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	//int len = strlen(arr);
//	//ģ��ʵ����һ��strlen
//	int len = my_strlen(arr);//���鴫�Σ���������Ԫ�صĵ�ַ
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
//	scanf("%d", &num);//1234��
//	//�ݹ飬һ���������߹������䶨���������ֱ�ӻ��ӵ��������һ�ַ���
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
//	main();//stack overflowջ������ڴ��Ϊջ������������̬��
//	//ջ�����ֲ������������β�
//	//��������̬���ٵ��ڴ�,malloc��calloc
//	//ȫ�ֱ�����static���εı���
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
