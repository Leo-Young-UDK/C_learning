#define ROW 3
#define COL 3

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//ÉùÃ÷
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
