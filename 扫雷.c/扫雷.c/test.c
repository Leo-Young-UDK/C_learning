#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"




void game()
{
	printf("ɨ��\n");
	//�������飬һ���洢�׵���Ϣ��һ����ʾ�Ų��׵���Ϣ
	//�׵���Ϣ�洢
	//��ά����
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	//�ų���
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
	FineMine(mine,show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);



}


void menu()
{
	printf("****************************\n");
	printf("********  1.play   *********\n");
	printf("********  0.exit   *********\n");
	printf("****************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}