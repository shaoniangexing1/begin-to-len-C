#include<stdio.h>
int main ()
{
	int day=1;
	printf("%d",pnum(day));	
}
int pnum(int day){
		int c;
		if(day==10) c=1;
		else c=(pnum(day+1)+1)*2;
		return c;
}
