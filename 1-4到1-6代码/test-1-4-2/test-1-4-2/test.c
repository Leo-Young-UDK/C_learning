#define _CRT_SECURE_NO_WARNINGS 1//define��ָ��ǹؼ���

#include<stdio.h>

#include<string.h>




//�ṹ�壬���Ǹ��Ӷ����ýṹ�����������������Լ�����Ľṹ��

struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C����",55 };
	strcpy(b1.name, "C++");//string copy-�ַ�������-�⺯��-string.h
	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	////printf("��������%s��\n", (*pb).name);
	////printf("�۸�%dԪ\n", (*pb).price);

	printf("��������%s��\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	return 0;
}

//
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));//ֻҪ��ָ������������ֽڴ�Сֻ�����ϵͳλ���йأ�32bit-4��64bit-8
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
//	int* p = &a;//ȡ��ַ��ָ�������������ŵ�ַ��
//	printf("%d\n", a);
//	printf("%d\n", &a); //17824152
//	printf("%p\n", &a);//0095F8AC
//	printf("%p\n", p);
//	*p=20;//* - �����ò�����
//	printf("%d\n", a);//20
//	return 0;
//}


////#define MAX 100//�����ʶ�����������Զ���������
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//#define MAX(X,Y) (X>Y?X:Y)//��Ķ���
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
//	printf("%d\n", sum);//static�ı��˺������������ԣ��ⲿ���ӱ�Ϊ�ڲ�����
//	return 0;
//}




//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);//static�ı��˱���������������̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ��
//	return 0;
//}




//void test()
//{
//	//int a = 1;//a��һ���ֲ�����,ÿ�γ�ȥ��������
//	static int a = 1;//a��һ����̬�ľֲ�������static���ξֲ��������������ڱ䳤
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
//	arr[4];//[]�±�Ӧ�ò�����
//	int a = 10;
//	int b = 2;
//	int sum = Add(a, b);//()�������ò�����
//	return 0;
//}






//int main()
//{
//	//exp1? exp2:exp3,��exp1Ϊ�棬��Ϊexp2������Ϊexp3����Ŀ������������excel��if����
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
//	//��-��0
//	//��-0
//	//&&�߼��룬||�߼���
//	int a = 3;
//	int b = 0;
//	int c = a||b;
//	printf("c=%d\n",c);
//	return 0;
//}

//ֻҪ�����������ڴ洢���еĶ��ǲ��룬������ԭ�뷴�벹����ͬ
//�ؼ���register int a =10�������a����ɼĴ�������
