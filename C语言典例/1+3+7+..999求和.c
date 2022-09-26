#include<stdio.h>
int main ()
{
	int i,s=0,n=0;
	for (i=1;i<1000;i+=n)
	{
		s+=i;
		n+=2;
	} 
	 printf("%d",s);
}
