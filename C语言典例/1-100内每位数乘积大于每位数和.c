#include<stdio.h>
void main()
{
	int m,k=1,s=0,n;
	for(n=1;n<=100;n++)
	{
		k=1,s=0;
		m=n;
		while(m)
		{
			k*=m%10;
			s+=m%10;
			m/=10;
		}
			if(k>s) printf("%d, ",n);
		
	}
} 
