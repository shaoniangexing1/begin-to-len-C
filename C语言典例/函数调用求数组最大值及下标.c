#include<stdio.h>
int main()
{
	int a[]={9,5,6,4,8,6,1,3,2,7},i,j,k;
	for (i=1,j=a[0],k=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		j=max(j,a[i]);
		if(j==a[i]) k=i;
		
	}
	printf("max=%d µÚ%d¸öÊý",j,k+1);
}

int max(int x,int y)
{
	return (x>y?x:y);
 } 
