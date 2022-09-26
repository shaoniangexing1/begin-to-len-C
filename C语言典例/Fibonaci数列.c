#include<stdio.h>
//斐波那契数列前40项 
int main (void)
{
	int f1=1,f2=1,i;
	for (i=0;i<20;i++)
	{
		printf("%d\t%d\t",f1,f2);
		if(i%5==0&&i!=0)printf("\n");
		f1+=f2;
		f2+=f1; 
	}
	
}
