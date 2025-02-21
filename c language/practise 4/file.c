#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *f1;
	
	fopen("c://1.txt","w");
	printf("starting position of %d",ftell(f1));
	fputs("hello",f1);
	printf("current position %d",ftell(f1));
	fclose(f1);
}