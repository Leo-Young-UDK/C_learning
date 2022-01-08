#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for ( i= 0; i <rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}



}
//'3'-'1'=2//ASCII��ֵ����
//'3'-'0'=3
//'0'-'0'=0
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
	mine[x - 1][y - 1] +
	mine[x][y - 1] +
	mine[x + 1][y - 1] +
	mine[x + 1][y] +
	mine[x + 1][y + 1] +
	mine[x][y + 1] +
	mine[x - 1][y + 1] - 8 * '0';
}

void SpreadOut(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		int i = 0;
		for (i = x - 1; i <= x + 1; i++)
		{
			int j = 0;
			for (j = y - 1; j<=y+1; j++)
			{
				show[i][j] = ' ';
			}
		}

	}
	else
	{
		show[x][y] = count + '0';
	}

}


void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������������꣺");
		scanf("%d%d", &x, &y);
		if (x <= 9 && x >= 1 && y <= 9 && y >= 1)
		{
			if (mine[x][y]=='1')//����
			{
				printf("Explosion!!!\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//û����
			{
				//����x��y��Χ������
				int count = get_mine_count(mine, x, y);
				//չ������������������
				//��������ף������ΧҲû����
				//�ݹ�ʵ��
				SpreadOut(mine, show, x, y);
				show[x][y] = count+'0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
	}
		
}


