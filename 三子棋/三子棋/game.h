#pragma once

//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���Ŷ���
#define ROW 3
#define COL 3

//��������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̺�������������
void DisplayBorad(char board[ROW][COL], int row, int col);

//�������
void PlayerBorad(char board[ROW][COL], int row, int col);

//��������
void ComputerBorad(char board[][COL],int row,int col);

//�ж���Ӯ
//���Ӯ - *
//����Ӯ - #
//ƽ��   - Q
//��Ϸ���� C
char IsWin(char borad[][COL], int row, int col);

