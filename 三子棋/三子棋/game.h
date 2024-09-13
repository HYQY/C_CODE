#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>//srand和rand的头文件
#include <time.h>//srand和rand的头文件

#define ROW 3//棋盘的行
#define COL 3//棋盘的列

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
//找没有下棋的位置随机下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断谁赢
//玩家赢--返回'*' 
//电脑赢--返回'#'
//平局--返回'Q'
//继续--返回'C'
//
char IsWin(char board[ROW][COL], int row, int col);