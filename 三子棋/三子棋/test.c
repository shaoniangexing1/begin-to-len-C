#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"
void menu()
{
	printf("********************\n");
	printf("****1.��ʼ��Ϸ******\n");
	printf("****0.�˳���Ϸ******\n");
	printf("********************\n");
}

void game()
{
	//�洢���ݶ�ά����
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board, ROW, COL);

	//��ӡ���̺���������ӡ�����Ԫ��
	DisplayBorad(board, ROW, COL);
	char ret = 0;//������Ϸ״̬
	while(1)
	{ 
	//�������
	PlayerBorad(board, ROW, COL);
	DisplayBorad(board, ROW, COL);
	//�ж������Ӯ
	ret=IsWin(board,ROW,COL);
	if (ret != 'C')
		break;
	//��������
	ComputerBorad(board, ROW, COL);
	DisplayBorad(board, ROW, COL);
	//�жϵ�����Ӯ
	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
		break;
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else
		printf("ƽ��");
	DisplayBorad(board, ROW, COL);
	
}
int main()
{
	int input = 0;
	do 
	{
		menu();
		srand((unsigned)time(NULL));
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
}