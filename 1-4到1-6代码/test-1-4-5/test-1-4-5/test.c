#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60//˵����-s��ʾȡ���ػ���-t 60��ʾִ��ʣ��ʱ�䣻��-s��Ϊ-aΪȡ���ػ�
	//system����-ִ��ϵͳ����
	system("shutdown -s -t 60");

	printf("��ע�⣬��ĵ��Խ���1�����ڹػ����������\"������\"��ȡ���ػ�\n�����룺>");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ���--strcmp()���Ϊ0
	{
		system("shutdown -a");
		break;
	}
	return 0;
}



//int main()
//{
//
//	printf("hello bit\n");
//	goto go;//go�ǵ����ķ���,���Ըĳɷǳ������ǹؼ��֡��Ǳ�������Ԥ��������ķ���
//	printf("what?!\n");
//
//go://�����ķ���
//	printf("�������\n");
//
//	return 0;
//}

//for (...)
//{
//	for (...)
//	{
//		if (disaster)
//			goto error;
//	}
//}
//��
//error :
//	if (disaster)

//int main()
//{
//
//	printf("hello bit\n");
//	goto again;//again�ǵ����ķ���
//	printf("what?!\n");
//
//again://�����ķ���
//	printf("�������\n");
//
//	return 0;
//}







//��������Ϸ
//��������һ�������
//������


//void menu()
//{
//	printf("********************************\n");
//	printf("**1.play**********0.exit********\n");
//	printf("********************************\n");
//
//}
//
//
//void game()
//{
//	int ret = rand()%100+1;//���������,����1~100
//	int guess = 0;
//	//time��ָ��ΪNULL���䱾����һ��long������
//	//ʱ�������ǰ�������ʱ���ȥ���������ʼʱ��1970-1-1-0��0��0
//	//��ʱ���������������
//	//time_t time(time_t*timer)
//	//printf("������\n");
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}







////����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//2d��ʾ��λ��������λ�ÿո���,-2d��ʾ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}








//int main()
//{
//	int arr[] = { -55, -2,- 3,- 4,- 5,- 6,- 7,- 8,- 9, -10 };
//	int max = arr[0];//����ȫ�Ǹ���
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}



//int main()//���1/1-1/2+1/3-...+1/99-1/100
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;//  1/2��0��1��intΪ��
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}


//int main()//1~100��9�ĸ���
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10==9)
//		{
//			count ++ ;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}









//int main()//100~200֮�������
//{
//	int i = 0;
//	int count = 0;
//	for (i= 3; i<=200; i+=2)//�����϶���������+=2��ʾ��2
//	{
//		//�Գ���������2~i-1����
//		int j = 0;//i=a*b,a��b������һ��С�ڵ���i��ƽ��
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//��������n�־���


//int main()//�ܱ�4�������ܱ�100���������ܱ�400������Ϊ����
//{
//	int year=0;
//	int count=0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//�ڶ���д��
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}



//int main()//շת������������Լ��
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()//��1��100�����ı���
//{
//	int i=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}



//int main()//������������ʹ����С����
//{
//	int a=0;
//	int b=0;
//	int c=0;
//
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}