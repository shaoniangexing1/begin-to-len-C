#include<stdio.h>
int main (void)
{
	int i,j;
	for(i=1;i<=35;i++)
	{
		j=35-i;
		if(2*i+4*j==94)
			printf("ผฆ:%d  อร:%d",i,j); 
	}
}
