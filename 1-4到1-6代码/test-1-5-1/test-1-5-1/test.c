#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//int Add(int a, int b)//���������������������Ͷ������ڿ������е��ѿ��ӷ�ƨ�����������÷���
//������������.hͷ�ļ����������.cԴ�ļ�
#include "add.h"//�����Լ��ĺ���ֻҪ�á����Ϳ��ԣ�����Ҫ<>

int main()
{
	int a = 20;
	int b = 10;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//int Add(int a, int b)//��������
//{
//	int c = a + b;
//	return c;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf������������Ϊ��ӡ���ַ�����
//	return 0;
//}




//int main()
//{
//	//int len = 0;
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//��ʽ����
//
//	return 0;
//}


//void Add(int*p)//����Ҫ����ֵ������void
//{
//	(*p)++;//++���ȼ��Ƚϸߣ����ȶ�p�����㣬Ȼ��*��������
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
//		printf("�������\n");
//	}
//	else if (d == 7)
//	{
//		printf("������������\n", d);
//
//	}
//	else
//	{
//		printf("����������%d\n", d);
//
//	}
//	return 0;
//}



                         //������ch��һ��ָ��
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
//			return mid;//ע�⣬return�൱�ڷ���һ��ֵ������ֹ�����ڴ˴��������൱��break
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
//	int ret=binary_search(a, arr,sz);//���鴫�ε�ʱ������Ǵ�����ĵ�һ��Ԫ�ص�ַ
//
//	if (ret == -1)
//	{
//		printf("�����ֲ���������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
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
//		printf("%d��������\n", a);
//	}
//	else
//	{
//		printf("%d�겻������\n", a);
//	}
//	return 0;
//}








//int is_prime(int x)//��������1�����򷵻�0
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
//	printf("������һ�����������1�������֮�������>:");
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


//��ʵ�δ����β�ʱ���β���ʵ�ε�һ�ݿ��������βε��޸Ĳ���Ӱ��ʵ�ε�ֵ
//void swap(int x, int y)//xy���βΣ�ֻ�ں��������ã���������
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//swap2(int*pa, int*pb)//pa��pb�ֱ�õ�ab�ĵ�ַ��Ȼ�������//papb���β�//��ַ���ÿ���ʹ�����ڲ��ı亯���ⲿ��ֵ
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 9;
//	int b = 20;//ab���Լ��ĵ�ַ
//	printf("a= %d ,b=%d\n", a, b);
//	//swap(a, b);//swap�������ڴ��ab����ͬһ��//��ֵ����
//	swap2(&a, &b);//����ָ������ɣ���ab�ĵ�ַ����ָ�����//ab����ʵ��,��ȷ�е�ֵ//��ַ����
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





//�����Ļ�����ɣ���������ret_type��������fun_name����������para1
//������ʽ
//ret_type fun_name(para1, *)
//{
//	statement;//���������ڵ��Ǻ�����
//}





//memset�ڴ�����

//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, '*', 5);//�м�Ĳ�����ASCII��ֵ��Ӧ���ַ�
//	printf("%s\n", arr1);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "##########";
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//\0��Ϊ�ַ���������־��printf��ӡ��\0�Ͳ�����
//	return 0;
//}



