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
//	scanf("%d%d",&num1,&num2);//�������ݣ�ʹ�����뺯��scanf
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}


//&ȡ��ַ����,c���Թ涨����������Ҫ���ڴ����ǰ��







//int num2=20;//ȫ�ֱ���-�����ڴ�����ⲿ�ģ������Ǵ���飩
//
//int main()
//{
//	int num1=10;//�ֲ�����-�����ڴ�����ڲ��ģ������Ǵ���飩
//	return 0;
//}


//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ�����ײ�����ᣬ����bug
//��������ͬ���ֲ�����



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
//	//char ch='a';//ע���ַ�ֻ��һ��λ�ã������ַ����ͺ��ַ���������һ������
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
//%d��ӡ����ʮ���ƣ�%xʮ�����ƣ�%o�˽��ƣ�%c�ַ���%p��ַ��ʽ


int main()
{
	char arr[] = { 'a', 'b', 'c' };
	int sz = sizeof("abc");
	printf("%d\n", sz);
	printf("%c\n", arr);

}




//#include <stdio.h>//����һ��stdio.h�ļ�
////std i o ��׼�������
//
//int main()//������-�������ڣ�����û��main����������ֻ��һ��
//{
//	extern int g_val;
//	printf("g_val=%d\n",g_val);//δ�����ı���
//	
//	return 0;
//}//int ��ʾmain�������÷���һ������ֵ
////printf�ǿ⺯����Ҫ���к���#include<>




