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

int i;//ȫ�ֱ���������ʼ����Ĭ��Ϊ0
int main()
{
	i--;
	if (i > sizeof(i))//sizeof���޷��������ֽ�Ϊ4�����ȼ��������ͣ�i=-1Ҳ���滻���޷��������䲹��ȫΪ1���޷������ǳ���
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}




