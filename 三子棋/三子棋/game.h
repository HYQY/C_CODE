#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>//srand��rand��ͷ�ļ�
#include <time.h>//srand��rand��ͷ�ļ�

#define ROW 3//���̵���
#define COL 3//���̵���

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DispalyBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
//��û�������λ���������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж�˭Ӯ
//���Ӯ--����'*' 
//����Ӯ--����'#'
//ƽ��--����'Q'
//����--����'C'
//
char IsWin(char board[ROW][COL], int row, int col);