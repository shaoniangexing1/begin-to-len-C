#include<stdio.h>
int main (void)
{
	int m,n,w;
	scanf("%d %d",&m,&n);
	while(n)
	{
		w=m%n;   //余数 
		m=n;     //除数变成新的被除数 
		n=w;	 //余数变成新的除数 
	}
	printf("最大公约数为:%d",m);
}
