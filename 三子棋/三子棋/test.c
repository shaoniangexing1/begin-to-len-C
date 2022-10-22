#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"
void menu()
{
	printf("********************\n");
	printf("****1.开始游戏******\n");
	printf("****0.退出游戏******\n");
	printf("********************\n");
}

void game()
{
	//存储数据二维数组
	char board[ROW][COL];
	//初始化数组
	InitBoard(board, ROW, COL);

	//打印棋盘函数——打印输出空元素
	DisplayBorad(board, ROW, COL);
	char ret = 0;//接收游戏状态
	while(1)
	{ 
	//玩家下棋
	PlayerBorad(board, ROW, COL);
	DisplayBorad(board, ROW, COL);
	//判断玩家输赢
	ret=IsWin(board,ROW,COL);
	if (ret != 'C')
		break;
	//电脑下棋
	ComputerBorad(board, ROW, COL);
	DisplayBorad(board, ROW, COL);
	//判断电脑输赢
	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
		break;
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else
		printf("平局");
	DisplayBorad(board, ROW, COL);
	
}
int main()
{
	int input = 0;
	do 
	{
		menu();
		srand((unsigned)time(NULL));
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
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