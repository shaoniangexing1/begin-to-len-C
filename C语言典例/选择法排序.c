#include<stdio.h>
int main (void)
{
	int i,j,t,a[10]={5,6,4,8,9,7,3,0,1,2};
	for (i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;	
			}
		}
	}
	for (i=0;i<10;i++)
		printf("%2d",a[i]);
 } 
