#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int ch =0;
	while ((ch=getchar())!=EOF)//EOF,end of file -> -1,�ڼ�����ʵ�ְ���Ctrl+z������ʾΪ^Z
	{
		putchar(ch);
	}
	return 0;
}




//int main()
//{
//	int ch = getchar();//��ȡ����ĵ�һ���ַ�
//	putchar(ch);//���ch�е��ַ�
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		if (5 == i)
//			continue;//������ֹ����ѭ��������Ĵ��벻��ִ�У����ǵ���while�жϲ��֣����û��ʹi�仯����䣬��������ѭ��
//		printf("%d\n", i);//��ӡ���ȱ��5
//		
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//������ֹѭ��
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}




//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//switch�����ͱ��ʽ
//	{
//	case 1:m++;//m=3
//	case 2:n++;//n=2
//	case 3:
//		switch (n)
//		{
//		case 1:n++;//n=3
//		case 2:m++; n++;//m=4
//			break;
//		default:
//			break;
//		}
//	case 4:m++;//m=5
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n",m,n);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day)//switch�����ͱ��ʽ
//	{
//	case 1://caseҲ�Ǹ������ͳ����������ǳ�����
//		if (n == 1)
//			printf("?!\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("Error!������1~7\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch�����ͱ��ʽ
//	{
//	case 1://caseҲ�Ǹ������ͳ����������ǳ�����
//		printf("����һ\n");
//	case 2:
//		printf("���ڶ�\n");
//	case 3:
//		printf("������\n");
//	case 4:
//		printf("������\n");
//	case 5:
//		printf("������\n");
//	case 6:
//		printf("������\n");
//	case 7:
//		printf("������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch�����ͱ��ʽ
//	{
//	case 1://caseҲ�Ǹ������ͳ����������ǳ�����
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}





//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int c = 1;
//	scanf("%d\n", &a);
//	c = a % 2;
//	if (c == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}


//int main()
//{
//	int num = 1;
//	if (5 == num)//��ʹ==©��һ����Ҳ���������Ϊ�ᱨ��5���ܹ�����ֵ
//	{
//		printf("hehe\n");
//	}
//}





//int main()
//{
//	int age = 20;
//	scanf("%d/n", &age);
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else if (18<=age<28)//�������ж�18<=ageΪ�٣���0����0<28Ϊ�棬�����������ʲô��������
//	//	printf("����\n");

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//�ж���==��=�Ǹ�ֵ
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//		
//	return 0;
//}

	//if (age < 18)
	//{
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//}		
	//else
	//{
	//	if (age >= 18 && age<28)
	//		printf("����\n");
	//	else if (age >= 28 && age<50)
	//		printf("׳��\n");
	//	else if (age >= 50 && age<90)
	//		printf("����\n");
	//	else
	//		printf("������\n");
	//}
	//�����ʽҲ��
		
	//if (age < 18)
	//	printf("δ����\n");
	//else if (age>=18 && age<28)
	//	printf("����\n");
	//else if (age >= 28 && age<50)
	//	printf("׳��\n");
	//else if (age >= 50 && age<90)
	//	printf("����\n");
	//else
	//	printf("������\n");
	;//�����
	//return 0;//һ���ֺ�Ϊһ����䣬���ӻᱨ��




