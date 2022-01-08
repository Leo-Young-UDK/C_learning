#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"




void game()
{
	printf("扫雷\n");
	//两个数组，一个存储雷的信息，一个表示排查雷的信息
	//雷的信息存储
	//二维数组
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	//排除雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}