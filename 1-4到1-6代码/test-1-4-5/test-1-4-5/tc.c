#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//��������Ϸ
//��������һ�������
//������



void menu()
{
	printf("********************************\n");
	printf("**1.play**********0.exit********\n");
	printf("********************************\n");

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}while (input)
			return 0;
	}