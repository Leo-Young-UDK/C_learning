#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>










//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", &password);
//		if (strcmp(password,"123456")==0)//�ȺŲ��������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (3 == i)
//		printf("��������������˳�����\n");
//	return 0;
//}










//int main()
//{
//	//char arr[]="abc";
//	//[a  b  c  \0]
//	// 0  1  2   3
//	//c ���±� 4-2
//	char arr1[] = "welcome to bit!!!";//20���ַ�,21���±�
//	char arr2[] = "#################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	int right = strlen(arr1) - 1;//	printf("%d\n", strlen(arr1)),#20
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(100);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}




//int main()//���ַ����ң����Ҵ���Ϊlog2��n���Ρ�
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("find it! �±��ǣ�%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("lost!\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 6, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("find it! �±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("lost!\n");
//	}
//
//	return 0;
//}//Ч�ʵ�


//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret =ret* n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for ( n = 1; n <=10; n++)
//	{
//		ret = 1;
//		for (i=1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);//100��һ�����ͷŲ��£������
//	for (i =1; i <=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;//endless loop
//		printf("%d ", i);
//		i++;
//	} 
//	while (i<=10);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int k = 0;
//	for ( i = 0,k=0; k =1; i++,k++)//�м����˸�ֵ�������жϣ���ֵ֮��Ϊ0�٣�������ѭ����Ϊ1������������ѭ��
//	{
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x=0,y=0; x<2&&y<5; x++,y++)//һ������
//	{
//			printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i<10;i++)
//	{
//		for (; j < 10;j++)//ʡ���ˣ������ٳ�ʼ��������10��֮��j==10������û�б��ٴγ�ʼ�����ж�Ϊ��
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)//��ʼ�жϵ���������ʡ�ԣ������жϲ���ʡ�Ծͻ��ж�Ϊ��Ϊ�档������Ǻ���������Ҫ���ʡ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}




//int main()
//{
//	//int i = 0;//��ʼ��
//	//while (i <= 10)//�ж�
//	//{
//	//	i++;//����
//	//}
//	int i = 0;//��ʼ��
//	//������ʼ��  �ж� ����
//	for (i = 1; i <=10; i++)//���鲻Ҫ��forѭ�����ڸı�������������������ѭ��
//	{
//		if (5 <= i)//ע������ͷ��ŷ���
//			continue;
//		printf("%d\n", i);
//	}
//	//����forѭ��ʹ��ǰ�պ������д�����������ǰ���Ǳ����䣬for (i = 0; i <10; i++)��ǰ�պ�
//	//�����10��ѭ����10��Ԫ�أ�10�δ�ӡ
//	return 0;
//}




//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}




//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ch = 0;
//	int ret = 0;
//	char passward[20] = { 0 };
//	printf("����������>:");
//	scanf("%s", passward);//��������123456 ABCDȻ��س�����������password���棬scanfֻ���ȡ�ո�ǰ�������
//	//��������ʣһһ��\n
//	//��ȡһ��\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("Y/N:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//
//	return 0;
//}


//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	char passward[20] = { 0 };
//	printf("����������>:");
//	scanf("%s", passward);//��������123456Ȼ��س�����������password����
//	//��������ʣһһ��\n
//	//��ȡһ��\n
//	getchar();
//	printf("Y/N:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//
//	return 0;
//}
//getchar���ռ��������һ���ַ���putchar������������һ���ַ�

//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	char passward[20] = { 0 };
//	printf("����������>:");
//	scanf("%s", passward);//�������룬��������password���档�����뻺��������1234\n����scanfֻȡ����1234��getcharȡ����\n
//	printf("Y/N:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//
//	return 0;//#����\n����ASCII��ֵ��10
//}



