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
//debug���ԣ����Ե��ԣ���Ϊ�����˵�����Ϣ���������Ż�
//release��������������

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

//F5�������ԣ���F9���ʹ��

//F9�ϵ㣬�л��ϵ�
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

//F10����̣�����������һ�����̣���������ִ��


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

//1��+2��+3���Ĵ������ӣ����ù۲�
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
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

//ջ����ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�
//���������±����������ַ���ɵ͵��߱仯
//vs2013�£���i <=11����ͣ�٣�Ȼ��ᱨ������ѭ����û����ͣ������������л���ͣ�����ᱨ��
//gcc�������£�i<=11��ѭ��
//vc6.0�����£�i<=10��ѭ��
//��ͬ�Ļ������ڴ�Ĳ����������죬����ռ�ʱ����������
//����i��ʼ�����������ʼ�����棬������ѭ�������ǻᱨ��

//debug�汾��i��ַ����arr
//release�汾,i��ַ����arr����ַ�Ż����ڴ�ֲ��ṹ����仯

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

//void my_strcpy(char* dest, char*src)//�Ż�
//{
//	while (*src != '\0')
//	{
//		*dest ++= *src++;//��++����������ã���ʹ�ø�ֵ�ٽ���++
//	}
//	*dest = *src;//\0
//}

//void my_strcpy(char* dest, char*src)//�Ż�2
//{
//	if (dest != NULL&&src != NULL)
//	{
//		while (*dest++ = *src++)//\0��ASCII��ֵΪ0
//		{
//			;
//		}
//	}
//
//}

//#include<assert.h>
//
//void my_strcpy(char* dest, char*src)//�Ż�3
//{
//	assert(dest != NULL);
//	assert(src != NULL);//���ԣ�Ϊ�ٻᱨ��
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//#include<assert.h>
//
//void my_strcpy(char* dest,const char*src)//�Ż�3//Դͷ���ݲ��ܸ�
//{
//	assert(dest != NULL);
//	assert(src != NULL);//���ԣ�Ϊ�ٻᱨ��
//
//	while (*src++ = *dest++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	//strcpy�ַ�������
//	char arr1[] = "#####################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);//�����ַΪ�գ��������̣���������Ҳ���������⣬����Ҫ���⴫�δ���
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;//�������ˣ��﷨��num�������
//	int *p = &num;
//	*p = 20;
//	printf("%d\n", num);//��num����
//	return 0;
//}

//int main()
//{
//	const int num = 10;//�������ˣ��﷨��num�������
//	//const int *p = &num;//const����ָ�����
//	//*p = 20;//error��const����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ�������ܹ��ı�p�ĵ�ַ
//	//���const����*���ұߣ����ε���p��p�������ı�
//	//int *const p = &num;//const����ָ�����
//	//int n = 120;
//	//p = &n;
//	printf("%d\n", num);//��num����
//	//const����*����ߣ����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ
//	//const����*���ұߣ����ε���ָ�������������p���ܱ��ı���
//	//const int *const p = &num//p��*pɶ�����ܸ�
//	return 0;
//}

//#include<assert.h>
//
//char* my_strcpy(char* dest,const char*src)//�Ż�4������Ŀ��ĵ�ַ
//{
//	char *ret = dest;
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	assert(dest != NULL);
//	assert(src != NULL);//���ԣ�Ϊ�ٻᱨ��
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
//	//strcpy�ַ�������
//	char arr1[] = "#####################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ���ʣ�ֱ�Ӵ��ص�ַ
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

