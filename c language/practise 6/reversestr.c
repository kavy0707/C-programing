#include<stdio.h>
#include<string.h>
void main()
{
	char name[50],name1[50];
	int l;
	printf("enter the name=");
	gets(name);
	l=strlen(name);
	for (int i=0;i<l;i++)
	{
	  name1[i]=name[l-1-i];
	}
	puts(name1);
	
}