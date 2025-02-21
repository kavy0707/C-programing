#include<stdio.h>
#include<string.h>
void main()
{
	char name[20],*p;
	printf("enter name\n");
	gets(name);
	int l=strlen(name);
	p=&name[0];
	for (int i = 0; i <l ; ++i)
	{
		printf("the adress of ch=%c is %u\n",name[i],p );
		p++;
	}
}