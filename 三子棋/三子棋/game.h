#pragma once

//头文件包晗
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号定义
#define ROW 3
#define COL 3

//函数声明
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘函数——空数组
void DisplayBorad(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerBorad(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerBorad(char board[][COL],int row,int col);

//判断输赢
//玩家赢 - *
//电脑赢 - #
//平局   - Q
//游戏继续 C
char IsWin(char borad[][COL], int row, int col);

