#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//ָ������⣬�����ڳ����׶εġ�ָ�롷�½��Ѿ��Ӵ����ˣ�����֪����ָ��ĸ��
//1. ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ䡣
//2. ָ��Ĵ�С�ǹ̶���4 / 8���ֽڣ�32λƽ̨ / 64λƽ̨����
//3. ָ���������ͣ�ָ������;�����ָ��� + -�����Ĳ�����ָ������ò�����ʱ���Ȩ�ޡ�
//4. ָ�������

//int main()
//{
//	const char *p = "abcdef";//��abcdef����һ�������ַ���
//	*p = 'W';//�ڴ���ʷǷ�����������
//	//printf("%c\n", *p);//a
//	//printf("%s\n", p);//abcdef
//	printf("%s\n", p);
//	return 0;
//}

//segmentation fault�δ���

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char *str3 = "hello bit.";
//	const char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//��ͬ���ڴ�
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");//�����ַ��������ܱ��޸ģ����Ե�ַ��һ���ģ���ͬһ������
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}
//����ָoffer��

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


//int *p=&arr��arr�����飬p������ֵ�����д���Ǵ���Ĳ��ܴ������ָ�룬ֻ�ܴ����Ԫ�ص�ָ�롣int(*p)[10]=arr��д��������ȷ��

//int(*p)[10];
//���ͣ�p�Ⱥ�*��ϣ�˵��p��һ��ָ�������Ȼ��ָ��ָ�����һ����СΪ10�����͵����顣����p��һ��ָ�룬ָ��һ�����飬������ָ�롣
//����Ҫע�⣺[]�����ȼ�Ҫ����*�ŵģ����Ա�����ϣ�������֤p�Ⱥ�*��ϡ�

//ע�⣡���ָ������������ָ�벻��һ�����ǰ�������飬������ָ�룬ָ��ָ���������

//int main()
//{
//	char*arr[5];
//	char*(*pa)[5] = &arr;
//	//char*˵��paָ��������Ԫ��������char*
//	//��*pa���У�*˵��pa��ָ�룬pa��ָ�����������
//	//[5]˵��paָ���������5��Ԫ�ص�
//	//int ����
//	return 0;
//}

//int main()//����ָ�벻�������õ�
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
//	//int *p = arr;������͵�ָ�벽��Ϊ1
//	//printf("%d\n", p);//arr�ĵ�ַ
//	//printf("%d\n", *p);//������arr�ĵ�ַ����������Ԫ��1
//	//printf("%d\n", *p);//������arr�ĵ�ַ����������Ԫ��1
//	//printf("%d\n", *(p+6));//������arr�����һ��Ԫ�صĵ�ַ,����������Ԫ�ص�ַ˳�����У�ֱ�Ӱ�λ�Ӽ��ɣ����������һ��Ԫ��8
//	int(*pa)[7] = arr;//��ŵ���һ�������ָ�룬��������ָ�벽��Ϊ7
//	printf("%d\n", pa);//�����ַ
//	printf("%d\n", *pa);//Ԫ�ص�ַ
//	printf("%d\n", **pa);//Ԫ��
//
//	return 0;
//}

////�������������ʽ
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
////������ָ����ʽ
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
//			//p������ָ�룬����Ϊ5��ָ���ά����ĵ�һ�еĵ�ַ
//			//p+1�ǵڶ��еĵ�ַ
//			//*(p+1)�����ã����������ַ����һ��������Ԫ�صĵ�ַ����������ָ�ڶ���ÿ��Ԫ�صĵ�ַ
//			//*(p+1)+1������ָ�ڶ��е�һ��Ԫ�صĵ�ַ
//			//*(*(p+i)+j)�������ã������Ѿ���Ԫ�ص�ַ�ˣ��ٽ����÷��صľ���Ԫ�ر���
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	//int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 5, 8, 3, 6 }, { 9, 6, 5, 4, 2 } };
//	//print1(arr, 3, 5);//����������Ԫ�ص�ַ
//	//print2(arr, 3, 5);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//���ֵȼ�
//	}
//
//
//
//
//
//	return 0;
//}
//int arr[5];arr��5��Ԫ�ص���������
//int *parr1[10];parr1�����飬10��Ԫ�أ�Ԫ��������int*����ָ������
//int(*parr2)[10];parr2��ָ�룬��ָ��ָ����һ�����飬��������10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
//int(*parr3[10])[5];parr3�����飬���ŵ�Ԫ��������int(*  )[5]������ÿ��Ԫ��������ָ�룬���parr3�Ǵ������ָ�������
//parr3�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int

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
//void test(int arr[][])//��ok��ֻ��ʡ�Ժ�������ʡ���У���Ϊ�����Ͳ���ȷ��ָ��Ĳ���
//{}
//void test(int arr[][5])//ok
//{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣

//void test(int *arr)//��ok��arr�Ƕ�ά���飬����Ԫ�ص�ַ�ǵ�һ�еĵ�ַ������ά�����൱��������Ԫ�ص�һλ���飬��������ַ��ָ��Ӧ��������ָ��
//{}
//void test(int* arr[5])//��ok��ʵ����һ�����ָ������飻��ŵ�ÿ��Ԫ����һ������ָ�룬����������ָ��
//{}
//void test(int(*arr)[5])//ok
//{}
//void test(int **arr)//��ok������ָ���Ǵ��һ��ָ��ģ������Ǵ������ָ���
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
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

//void test1(int *p)
//{}
////test1�����ܽ���ʲô����������ָ��
//void test2(char* p)
//{}
////test2�����ܽ���ʲô�������ַ�ָ��


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


//����ָ�룬ָ������ָ��
//&������ �� ������ ���Ǻ����ĵ�ַ

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
//	void(*p)(char*) = Point;//��������ȥ���������������ص����ͣ�void(* )(char*)
//	(*p)("hello bit");
//	return 0;
//}

//����1
//(*(void(*)())0)();void(*)()����ָ�����ͣ�(void(*)())0 ��0ǿ��ת��Ϊ��ַ��*(void(*)())0�����������ַ��
//(*(void(*)())0)();���������ַ�ĺ��� - ����0��ַ���ĸú���

//����2
//void(*signal(int, void(*)(int)))(int);
//void(*     )(int) ����ָ��
//signal(int, void(*)(int))����
//int, void(*)(int)��������������һ�����ͣ�һ������ָ��
//void(*     signal(int, void(*)(int))    )(int);
//typedef void(* pfun_t )(int) //��void(*     )(int)�����������Ϊpfun_t����Ϊ�������������������
//typedef unsigned int uint���������ƣ�unit��unsigned int�ı�����
//��void(*signal(int, void(*)(int)))(int)���Ի���Ϊpun_t signal(int,pun_t)
//
//signal��һ�������������������2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룻�ú���ָ��ָ��ĺ����Ĳ�����int�������ķ���������void
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
//	//printf("%d\n", (***p)(2, 6));//�ĸ���ʽ�Ľ��һ��
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
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 6));
//	}
//	return 0;
//}


//int(*parr1[10])();����ָ�������
//int *parr2[10]();�﷨����
//int(*)() parr3[10];�﷨����


//char*my_strlen(char*dest, char*src);
////1.дһ������ָ��pf���ܹ�ָ��my_strlen
////2.дһ������ָ������pfArr���ܹ����4��my_strlen�����ĵ�ַ
//
//char*(*pf)(char*,const char*);
//char*(*parrArr[4])(char*,const char*);

//������

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

//void Calc(int(*p)(int, int))//�ص��������յ�������ַ���ٵ��ú��������ٴ�����������
//{
//	int x = 0;
//	int y = 0;
//	printf("������������������");
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
//		printf("��ѡ��");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
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
//	//pfArr��һ������ָ������ - ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
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
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ��int(* )(int, int)
//	return 0;
//}

//void print(char*str)//print����Ϊ�ص�������p����print�����Ļ��Ʊ���Ϊ�ص�����
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
////qosrt������ʹ���ߵ�ʵ��һ���ȽϺ���,���������������͵�����
////��������
////void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
////
////void*���͵�ָ����Խ����������͵ĵ�ַ�����ǲ��ܹ����н����ò�������Ϊ�䲽������ȷ�ϣ����Ҳ���ܽ���+-��������
////
////
////
//int int_cmp(const void * p1, const void * p2)//�Ƚ���������ֵ
//{
//	return (*(int *)p1 - *(int *)p2);//ǿ��ת����ָ��Ϊ����ָ�룬Ȼ���ٽ�����
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
//int cmp_float(const void * p1, const void * p2)//�Ƚ�����������ֵ
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
//int cmp_stu_by_age(const void * p1, const void * p2)//�Ƚ������ṹ������ֵ
//{
//	return (((struct Stu *)p1)->age - ((struct Stu *)p2)->age);
//}
//
//int cmp_stu_by_name(const void * p1, const void * p2)//�Ƚ������ṹ���ַ���ֵ
//{
//	return strcmp(((struct Stu *)p1)->name , ((struct Stu *)p2)->name);//�൱�������ַ���������
//}
//void test3()
//{
//	struct Stu arr[3] = { { "����", 20 }, { "lisi", 19 }, { "wangwu", 18 } };
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




////ģ��qsort
//#include <stdio.h>
//#include<string.h>
////int cmp_char(const void * p1, const void * p2)//�Ƚ������ṹ���ַ���ֵ
////{
////	return strcmp((*(char *)p1) , (*(char *)p2));//�൱�������ַ���������
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
//	int i = 0;//����
//	int j = 0; 
//	for (i = 0; i< count - 1; i++)
//	{
//		//ÿһ�˱Ƚϵ�����
//		for (j = 0; j<count - i - 1; j++)
//		{
//			//����Ԫ�صıȽ�
//			//��������ʲô�������ݶ�ת�����ַ�ָ����߼��ǣ�ָ����ַ����ݵĴ�С����һ���ֽ�
//			//��ָ��תΪ�ַ�ָ�룬���䵥λ����Ϊ1�������ı����ֿ���ͨ��size���Ŵ�
//			//�������char*���ͣ����п��ܳ��ֲ���Ϊ4����Ϊ�������Ͳ���ȷ���п��ܴ������ַ�����
//			//��ʱ������������Բ��ʺ��ַ��������ݣ���Ϊ���ߵ�ָ�벽��Ϊ1.
//
//			//�����������ؼ��ĵ���cmp�������ǲ�ͬ�ģ���˿��Ե��ò�ͬ�ĺ������Բ�ͬ�������ͽ��бȽ�
//			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)//��ͬ���ݽṹ��ָ�벽����ͬ��������size���ڵ�����
//			{
//				//����Ԫ�ؽ���
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
//	////һά����
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4/8�������������ʾ��Ԫ�ص�ֵ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8
//	//printf("%d\n", sizeof(*a));//4/8
//	//printf("%d\n", sizeof(a + 1));//4/8������һ������a+1�ǵڶ���Ԫ�ص�ַ
//	//printf("%d\n", sizeof(a[1]));//4/8���ڶ���Ԫ�ش�С
//	//printf("%d\n", sizeof(&a));//4/8
//	//printf("%d\n", sizeof(*&a));//16������ĵ�ַ�����÷������飬��������
//	//printf("%d\n", sizeof(&a + 1));//4/8��&a�������ַ��&a+1�����������飬�����ǵ�ַ
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//	////�ַ�����
//	//char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));//6��sizeof����Ĵ�С
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1,��Ԫ�����ַ�
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//printf("%d\n", strlen(arr));//���ֵ������Ԫ�ص�ַ��ʼ����ֱ������'\0'
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//'a' - 97��������󣬷Ƿ�����
//	//printf("%d\n", strlen(arr[1]));//'b' - 98��������󣬷Ƿ�����
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//	////strlen()�Ĳ����ǵ�ַ����˵ָ�����
//	//char arr2[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8���������������ĵ�ַ
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//'a' - 97��������󣬷Ƿ�����
//	//printf("%d\n", strlen(arr[1]));//'b' - 98��������󣬷Ƿ�����
//	//printf("%d\n", strlen(&arr));//6�����о��棬����Ӱ�����ս��
//	//printf("%d\n", strlen(&arr + 1));//���ֵ����Ϊ������һ������Ҳ������'\0'
//	//printf("%d\n", strlen(&arr[0] + 1));//5���ӵڶ���Ԫ�ؿ�ʼ������'\0'ֹͣ
//	//char *p = "abcdef";
//	//printf("%d\n", sizeof(p));//4/8
//	//printf("%d\n", sizeof(p + 1));//4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1��*(p+0)=p[0]
//	//printf("%d\n", sizeof(&p));//4/8
//	//printf("%d\n", sizeof(&p + 1));//4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//'a' - 97��������󣬷Ƿ�����
//	//printf("%d\n", strlen(p[0]));//'b' - 98��������󣬷Ƿ�����
//	//printf("%d\n", strlen(&p));//���ֵ��ָ��ĵ�ַ��֪�������ĸ��ǡ�\0��
//	//printf("%d\n", strlen(&p + 1));//���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	////��ά����
//	//int a[3][4] = { 0 };//��ʼ����һ���������ȫ��0
//	//printf("%d\n", sizeof(a));//48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16��a[0]�Ƕ�ά����ĵ�һ����������һ�������У��ĸ�Ԫ�أ�,�൱�ڵ�������sizeof�����ڣ������һ�еĴ�С
//	//printf("%d\n", sizeof(a[0] + 1));//4��a[0]�Ƕ�ά����ĵ�һ������������������ʱ����Ԫ�صĵ�ַ��a[0]+1�ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4����һ�еڶ���Ԫ�صĴ�С
//	//printf("%d\n", sizeof(a + 1));//4��a�Ƕ�ά�������������û��sizeof������������Ҳû��&����������������a����Ԫ�ص�ַ
//	////���Ѷ�ά���鿴����һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�У���Ԫ�أ��ĵ�ַ��a+1���ǵ�һ�У���Ԫ�أ��ĵ�ַ
//	//printf("%d\n", sizeof(*(a + 1)));//16
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8�����ǵڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16���ڶ��е�ַ�����ã��ǵڶ�������Ĵ�С
//	//printf("%d\n", sizeof(*a));//16��a����Ԫ�صĵ�ַ - �ǵ�һ�еĵ�ַ��*a - ��һ�е�ַ�����ã��ǵ�һ������Ĵ�С
//	//printf("%d\n", sizeof(a[3]));///16��sizeof�����������㣬ֻ����������жϴ�С��a�Ƕ�ά���飬a[3]�Ƕ�ά���飨�����ڣ��ĵ����У���С����16
//	//return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//&a + 1�������ַ������Ǹ���ַ��Ȼ�������ַǿ��ת����Ϊ���͵�ַ��
//	printf("%d,%d", *(a + 1), *(ptr - 1));//�����ַ��һ���ǵ�5��Ԫ�صĵ�ַ
//	//д��������־���
//	//�������Ǵ���
//	//���������ڴ�
//	//�������Ǵ���
//	return 0;
//}
////����Ľ����ʲô��2,5


//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
////0x100000��ʮ������
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100014��p+1�Ǽ�ȡ����p�����ͣ�p�ǽṹ��ָ��
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001����pǿ��ת������Ϊ�޷��ų����Σ�Ȼ���ټ�һ��
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004����pǿ��ת������Ϊ�޷�������ָ�룬������Ϊ4����һ��һ����
//	//ָ��+-����ȡ����ָ������
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);//(int)a + 1�����������ϼ�1����ǰ��һ���ֽڣ�����int��4���ֽڣ������ǵ�һ��Ԫ�ص�ǰһ���ֽ�
//	printf("%x,%x", ptr1[-1], *ptr2);//4,ptr1[-1]=*(prt1-1);2000000����ǰ��һ���ֽ�
//	//�ڴ�Ϊ01 00 00 00 | 02 00 00 00 -> 00 00 00 02 ->С�˴���->02 00 00 00->2000000
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ�����ս��Ϊ{1,3,5}
//	int *p;
//	p = a[0];//��һ�еĵ�ַ����Ԫ�صĵ�ַ
//	printf("%d", p[0]);//1������p[0]=a[0][0]
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//�о���ָ�����������±겻ͬ��ָ���������������4��Ԫ��
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]=*(*(p+4)+2)��ʵ����Ӧ����a[3][3]Ԫ�أ����ָ������õ�������Ϊ-4������ָ�뱾��
//	//%p��ӡ���ǲ����ֱ��ֵ��ʮ�����ƣ����ڴ�λ�ã�����%d��ӡ���ǲ����Ӧ��ԭ���ʮ����
//	//10000000000000000000000000000100
//	//11111111111111111111111111111011
//	//11111111111111111111111111111100->ff ff ff fc->fffffffc
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1)); //(aa + 1)�ȼ���aa[1],�ǵڶ��еĵ�ַ�����ڶ��е�һ��Ԫ�ص�ַ����������6��ptr2������ָ��
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10��5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };//�ַ�ָ�����飬a�ĵ�ַ����Ԫ�ص�ַ
//	char**pa = a;//����ָ�룬ָ��ָ�������ָ�룬ָ������Ϊ�ַ�ָ�룬����Ϊ1������paָ��ָ��������Ԫ�ص�ַ
//	pa++;//����Ϊ1������һ��ָ�룬���ָ������ڶ���Ԫ�ص�ַ
//	printf("%s\n", *pa);//ָ������ڶ���Ԫ�ص�ַ������
//	return 0;
//}


//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };//ָ�����飬����������ַ������ַ����飩���׵�ַ
//	char**cp[] = { c + 3, c + 2, c + 1, c };//ָ���������Ԫ��ָ�뵹�ŷ�
//	char***cpp = cp;//ָ������cp���׵�ַ
//	//ԭ�ַ�����   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4  <-  &cp1
//	//"NEW"   <-  c2 <-  &c3
//	//"POINT" <-  c3 <-  &c2
//	//"FIRST" <-  c4 <-  &c1
//	//ע�⣬�ַ������ַ����飬��ʹ��printf��ӡ�ַ�����ʱ��������������������������Ԫ�ص�ַ���������ַ������'\0'ͣ�²���ӡ
//	printf("%s\n", **++cpp);//��++�ٽ��������ã�ָ�����c3��������ָ����������Σ���"POINT"�ĵ�ַ��������POINT��ע��!��ʱcpp�Ѿ������ı�
//	//ԭ�ַ�����   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4
//	//"NEW"   <-  c2 <-  &c3  <-  &cp2
//	//"POINT" <-  c3 <-  &c2
//	//"FIRST" <-  c4 <-  &c1
//	printf("%s\n", *--*++cpp + 3);//cpp��++���ٽ���Ϊ&c2��&c2��--Ϊ&c1���ٽ������õ�"ENTER"���׵�ַ;"ENTER"���ַ����飬��Ԫ�ص�ַ��'E'�ĵ�ַ
//	//�������������ַ�����ڶ���'E'�ĵ�ַ����˴�ӡ�ӵڶ���E��ʼ��ӡ�����ΪER��ע��!��ʱcp�Ѿ������ı�
//	//ԭ�ַ�����   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4
//	//"NEW"   <-  c2 <-  &c3
//	//"POINT" <-  c3 <-  &c1  <-  &cp3
//	//"FIRST" <-  c4 <-  &c1
//	printf("%s\n", *cpp[-2] + 3);//cpp[-2]=*(cpp-2)������&cp1�ĵ�ַ�ٽ�����Ϊ&c4��&c4�ٽ�����Ϊc4����"FIRST"������ĸ�ĵ�ַ��
//	//��+3��S��ʼ��ӡ�����ս��ΪST��ע�⣬��ʱ���Ǹ�ֵ����������++�����cppά��&cp3��ַ���䣬cpά�ֲ���
//	//ԭ�ַ�����   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4  <-  &cp1����ӡ��
//	//"NEW"   <-  c2 <-  &c3
//	//"POINT" <-  c3 <-  &c1  <-  &cp3
//	//"FIRST" <-  c4 <-  &c1
//	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]=*(*(cpp-1)-1)+1��cpp����&cp2Ȼ�������Ϊ&c3����cpĿǰָ��c3��
//	//cp����ǰ��һ����ָ��c2���ٽ�����Ϊc2����"NEW" ������ĸ�ĵ�ַ����+1��E��ʼ��ӡ
//	//���ս��ΪEW
//	//ԭ�ַ�����   c     cp       cpp
//	//"ENTER" <-  c1 <-  &c4
//	//"NEW"   <-  c2 <-  &c3  <-  &cp2����ӡ��
//	//"POINT" <-  c3 <-  &c1  <-  &cp3
//	//"FIRST" <-  c4 <-  &c1
//	return 0;
//}

//�����ַ�����ʹ֮��������
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
//	gets(arr);//��ȡ���У��ո�Ҳ��
//	reverse(arr);//���Ĳ���
//	printf("%s\n", arr);
//	return 0;
//}


////����a+aa+aaa+aaaa+aaaaaǰ5���
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


//��1��10000����������n λ��������ÿ��λ�ϵ����ֵ� n ����֮�͵���������������2��������
//���磬ˮ�ɻ�����3��������153=1^3+5^3+3^3=153
//

//int main()
//{
//	int i = 0;
//	for (size_t i = 0; i <=10000000; i++)
//	{
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		//����i��λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//����i��ÿһλn�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//�Ƚ�i==sum
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}

//��ӡһ��������

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (size_t i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (size_t j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (size_t j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (size_t i = 0; i < line-1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (size_t j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (size_t j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//
//	return 0;
//}

//����ˮ��һƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ��
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty=empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

//�����������飬ʹ����ȫ��λ������ǰ��

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
//	//�������ż��
//	while (left<right)
//	{
//		while ((a[left] % 2 == 1) && (left<right))
//		{
//			left++;
//		}
//		//���ұ�������
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

//int main()//abcde������ǰԤ�⣬˵�Ļ�������һ��
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
//	//����ռ�
//	int *p = (int*)mallo(10 * sizeof(int));
//	//ʹ�ÿռ�
//	//......
//	//�ͷſռ�
//	free(p);
//	return 0;
//}

//int* fun(int a, int b);//��������
//int(*) fun(int a, int b);//err
//int(* fun)(int a, int b);//����ָ��
//(int*) fun(int a, int b);//��������


//ʵ��һ�����������������ַ����е�k���ַ�
//ABCD����һ�εõ�BCDA�����εõ�CDAB

//void left_move(char*arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (size_t i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		int tmp = *arr;
//		int j = 0;
//		for (size_t j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

//2����ת��
//abcdef
//ab cdef�п�
//ba fedc���Ե���
//cdefab���嵹��

//void reverse(char*left, char*right)//���
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
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
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
//abcdefabcdef������λ�������ƶ���λ��ֻȡ�ַ������ȸ��ַ�

//int is_left_move(char*s1, char*s2)
//{
//	
//	//1.���ַ���1����Ӷ�һ���ַ���
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
//	//2.�ж�str2ָ����ַ��Ƿ�Ϊstr1ָ����ַ����Ӵ�
//	//strstr���Ӵ���
//	char*ret = strstr(s1, s2);//����������ָ��
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

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ����ϵ����ǵݼ��ģ���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N)���Ӻ���ǰһ��һ�����ر���
//����ָoffer��

int FindNum(int arr[][3], int k,int *px, int *py)//���Լ�д�Ĵ��룬�����ܣ�����ʱ�临�Ӷ�δ֪;���䣬һ��ʼ�д��������Լ�debug������
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
//			printf("�±���%d %d\n", x, y);
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
		printf("�ҵ���\n");
		printf("%d %d", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}



