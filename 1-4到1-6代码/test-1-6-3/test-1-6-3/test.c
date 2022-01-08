#define _CRT_SECURE_NO_WARNINGS 1

//测试三子棋游戏
#include"game.h"


void menu()
{
	printf("**************************\n");
	printf("****1.play******0.exit****\n");
	printf("**************************\n");
}

//   |   |   
//---|---|---
//   |   |
//---|---|---
//   |   |
//分割行

void game()
{
	char ret = 0;
	//创建数组，存放棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//玩家下棋
		Playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//告诉4种状态：继续'C'，平局'Q'，玩家赢‘*’，电脑赢‘#’

	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);//这个取地址老是忘
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}