#include<stdio.h>
#include<math.h>
int main (void){
	int i,j,s=0;
	for (i=100;i<1000;i++){
		j=i;
		s=0;
		while(j!=0){
			s+=pow(j%10,3); //pow���ݴκ���pow(m,n)Ϊm��n���� 
			j/=10;
		}
		if(i==s)
			printf("%d  ",i);
	} 
}
