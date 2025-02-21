#include<stdio.h>
#include<stdlib.h>
void main(int argc, char const *argv[])
{
	FILE *f;
	int a=10;
	fopen("c://1.c","w");
    fputs("10",f);
    fprintf(f, "%d\n",a );
    fclose(f);

}
