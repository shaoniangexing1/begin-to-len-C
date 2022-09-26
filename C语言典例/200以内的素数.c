#include<stdio.h>
int main ()
{
	int i,j,n=0;
	for (i=2;i<=200;i++)
	{
		for (j=2;j<=i;j++)
		{
			if(i%j==0) break;  
		}
		if (j==i)
		{
		printf("%d\t",i);
		n++;
		if(n%10==0)printf("\n");
		}
	}
	printf("%d",n);
	
} 
