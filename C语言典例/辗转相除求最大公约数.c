#include<stdio.h>
int main (void)
{
	int m,n,w;
	scanf("%d %d",&m,&n);
	while(n)
	{
		w=m%n;   //���� 
		m=n;     //��������µı����� 
		n=w;	 //��������µĳ��� 
	}
	printf("���Լ��Ϊ:%d",m);
}
