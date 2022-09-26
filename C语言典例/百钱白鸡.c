#include<stdio.h>
int main (void)
{
	int i,j,k;
	for (i=0;i<20;i++)
	{
		for(j=0;j<33;j++)
		{
			k=100-i-j;
			if(i*3*5+j*3*3+k==300)
			printf("¹«¼¦:%d Ä¸¼¦:%d ³û¼¦:%d\n",i,j,k);
		}
	}
}
