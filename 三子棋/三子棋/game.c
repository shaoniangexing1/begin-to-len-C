#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//��ʼ����ά���飨�ո�ֵ��
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//�������
void DisplayBorad(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if(i<row-1)
		{ 
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		}
	}
}
//�������
void PlayerBorad(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���������������:");
	scanf("%d %d", &x, &y);
	while(1)
	{
	if (x > 0 && x < row+1 && y>0 && y < col+1)
	{
		if (board[x-1][y-1] == ' ') {
			board[x-1][y-1] = '*';
			break;
		}
		else
		{
			printf("���������Ѵ��ڣ��������룺");
			scanf("%d %d", &x, &y);
		}
	}
	else
	{
		printf("�������������������:");
		scanf("%d %d", &x, &y);
	}
	}
}

//��������
void ComputerBorad(char board[][COL], int row, int col)
{
	
	while (1) 
	{
		int x = rand() % row;
		int y = rand() % col;   
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			printf("������:>\n");
			break;
		}
	}
}

char IsWin(char borad[][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	//�ж���
	y = 0;
	for ( x = 0; x < row; x++)
	{
		while (y<= col-1)
		{
			if (borad[x][y] == borad[x][y+1] && borad[x][y] != ' ')
			{
				if (y == col - 2)
				{
					return borad[x][y];
				}
				y++;
				continue;
			}
			break;
		}
	}
	//�ж���
	x = 0;
	for (y = 0; y < col; y++)
	{
		while (x <= row - 1)
		{
			if (borad[x][y] == borad[x + 1][y] && borad[x][y] != ' ')
			{
				if (x ==col - 2)
				{
					return borad[x][y];
				}
				x++;
				continue;
			}
			break;
		}
	}

	b:
	//�ж϶Խ���
	y = 0;
	for ( x = 0; x < row-1; x++)
	{
		while (y < col) 
		{
			if (x == y) 
			{
				if (borad[x][y] == borad[x+1][y+1] && borad[x][y] != ' ')
				{
					if (y ==col - 2)
					{
						return borad[x][y];
					}
					y++;
					break;
				}
				goto c;
			}
			continue;
		}
		
	}
	
	//���Խ���
	c:
	y = col - 1;
	for (x = 0; x < row - 1; x++)
	{
		while (y >= 0) 
		{
			if (x + y == 2) {
				if (borad[x][y] == borad[x + 1][y - 1] && borad[x][x] != ' ')
				{
					if (y-1 == 0)
					{
						return borad[x][y];
					}
					y--;
					break;
				}
			goto d;
			}
			continue;
		}
		
	}
	//�ж��Ƿ�����
	d:
	for ( x = 0; x < row; x++)
	{
		for ( y = 0; y < col; y++)
		{
			if (borad[x][y] == ' ') 
			{
				return 'C';
			}

		}
	}
	return 'Q';

}