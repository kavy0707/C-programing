#include<stdio.h>
#include<string.h>
void main()
{
	char name[500];
	int l;
	
	printf("enter name=");
	gets(name);
	l=strlen(name);
	for (int i = 0; i < l; ++i)
	{
		if (name[i]>=97 && name[i]<=122)
		{
			name[i]=name[i]-32;
		}
		else
		{
			name[i]=name[i];
		}
		
	}	puts(name);
	
}