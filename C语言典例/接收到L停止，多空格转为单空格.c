#include<stdio.h>
#include<string.h> 
void main()
{
	char cx,front='\0';
	while((cx=getchar())!='\n'){
		if(cx!=' ')putchar(cx);
		if(cx==' ')
			if(front!=' ')
				putchar(' ');
		front=cx;
	}	
} 
