#include<stdio.h>
int main(){
	int jh(int a[],int b);
int i,a[5]={1,2,3,4,5};
/*jh(a,5);*/
/*int *p;
p=a;
jh(p,5);*/

for(i=0;i<5;i++){
	printf("%d",a[i]);
}
} 
int jh(int *a,int b){
	int i,j,t,m=(b-1)/2;
	for(i=0;i<=m;i++){
		j=b-i-1;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	
}
