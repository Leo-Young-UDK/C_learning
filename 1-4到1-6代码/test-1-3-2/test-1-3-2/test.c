#define _CRT_SECURE_NO_WARNINGS 1//��������ʹ�ò���ȫ��������Դ�ļ��ĵ�һ��,�������治�üӷֺ�


#include<stdio.h>
#include<string.h>


//int main()
//{
//	int line =0;
//	printf("�������\n");
//
//	while(line<2000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line ++;
//	}
//	if(line>=2000)
//		printf("offer");
//	return 0;
//}

	




//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��:");
//	scanf("%d",&input);
//	if(input==1)
//		printf("offer");
//	else
//		printf("shit");//ѡ�����
//	return 0;
//}




//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	//\32--32��2��8��������
//	//32��Ϊ8���Ƶ��Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�����˴˴�\32������һ���ַ���ͬ��\tҲ��һ���ַ�
//	//32--10���� 26 --��ΪASCII�������ַ�
//	printf("%c%c%c\n",'\23','\132','\x60');
//	return 0;
//}
////����Ƚ��Ѷ��Ŀ��Լ�ע�ͣ����߲���Ҫ�Ŀ���ע�͵�
//
//



//int main()
//{
//	printf("abc\n223");
//	printf("abcn\t223\n");//����ĸ��: ??+]
//	printf("%c","b");
//	return 0;
//}




//int main()
//{
//	char arr1[]="abc";//����
//	//"abc" -- 'a','b','c','\0'--�ַ���������־
//	char arr2[]={'a','b','c'};
//	char arr3[]={'a','b','c',0};
//	char arr4[]={'a','b','c','\0'};
//	//�������û��0�������Ŵ�ӡһЩ�ַ���
//	//'a'--97,'\0'--0
//	//ASCII ��ֵ
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr3);
//	printf("%s\n",arr4);
//	printf("%d\n",strlen(arr1));//strlen�ַ�������,б��0�������ڣ�ֻ�Ǳ�־
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",strlen(arr3));
//	return 0;
//}


//ת���ַ���ת��ԭ������˼









//ö�ٹؼ�-enum
//enum Sex
//{
//	MALE ,
//	FEMALE,
//	SECRET
//};//�зֺ�
//
//int main()
//{
//	enum Sex sex = MALE;//ö�ٳ������ܸı�
//	sex=FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//	printf("%c\n",sex);
//
//	return 0;
//}

//˫������Ϊ�ַ���














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
//	//const int num=4;//const���εĳ�������const������.�����Ǳ��������Ǿ��г����ԣ������ǳ�������
//	//printf("%d\n",num)
//	////10;
//	//printf("c= %d\n",c);
//	return 0;
//}
//



int Add(int x, int y)//������Ĵ�����Ϊ�����壬�������ǰ���intΪ����Add�ķ������ͣ��Զ��庯��������븴��
{
	int z =x+y;
	return z;
}

//���飬һ����ͬ����Ԫ�صļ���
//
//int main()
//{
//	int a = 0;
//	int b=1;
//	int sum =2;
//	scanf("%d%d",&a,&b);//scanf_s��VS�������ṩ�ģ���˲����п�ƽ̨�Ի����ֲ�ԣ�������Ҫʹ��
//	//sum =a+b;
//	sum=Add(a,b);//����
//
//
//	printf("sum= %d\n",sum);
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};//����һ�����10���������ֵ�����,�±��0��ʼ���𣬡�1����Ӧ���±���0����0����Ӧ���±���9.
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
//	//printf("%d\n",arr[4]);//�±���ʽ����Ԫ�� #5
//	return 0;
//}

//int main()
//{
//	int a =1;
//	//����1ռ4���ֽ�32������λ
//	//00000000000000000000000000000001-->00000000000000000000000000000010����
//	int b=a<<4;
//	printf("%d\n",b);
//	return 0;
//}

//λ����^��λ���&��λ�롢|��λ��2����

//int main()
//{
//	int a=3;//   011
//	int b=5;//   101
//	int c=a&b;// 001-->1ʮ����
//	int d=a|b;// 111-->7
//	int e=a^b;// 110-->6��򣬶�Ӧ�Ķ�����λ��ͬ����Ϊ0������Ϊ1
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
//	a+=10;//���ϸ�ֵ��
//	printf("%d\n",a);
//	return 0;
//}

//��Ŀ��������˫Ŀ����������Ŀ������

int main()
{
	int a=3;
	int b=5;
	int arr[10]={0};//10�����ͣ�һ��40
	int sz=0;
	sz=sizeof(arr)/sizeof(arr[1]);
	a+b;//+��Ϊ˫Ŀ��������������������
	printf("%d\n",a);
	printf("%d\n",!a);//�߼�����������Ϊ��Ŀ��������-����Ϊ��Ŀ��+���ſ���ʡ�Եĵ�Ŀ
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof a);//sizeof�����������������ռ�Ŀռ��С����λ���ֽ�
	printf("sz=%d\n",sz);//������������ķ���
	return 0;
}