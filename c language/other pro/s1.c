#include<stdio.h>
#include<string.h>
struct kavy
{
	char name[50];
	char k[50];
}k;
void main()
{
	struct kavy k;
	printf("enter name\n");
	gets(k.name);
	
	puts(k.name);
	printf("enter k\n");
	gets(k.k);
	puts(k.k);

}
