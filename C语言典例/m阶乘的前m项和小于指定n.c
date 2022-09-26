#include<stdio.h>
int main (void)
{
	int i,j,m=1,s=0,n;
	scanf("%d",&n);
	for (i=1;;i++){
		for(j=1;j<=i;j++){
			m*=j; 
		}
		s+=m;
		if(s>n) break; 
	}
	printf("%d",i);
} 
