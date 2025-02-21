#include<stdio.h>
#include<string.h>
void main(int argc, char const *argv[])
{
	char name[20],n,m;
	int l;
	printf("enter name \n");
	gets(name);
	printf("enter character want to replace\n");
	scanf("%c",&n);
	getchar();
	printf("replace character\n");
	scanf(" %c",&m);

	l=strlen(name);
	for (int i = 0; i < l; ++i)
	{
		if (name[i]==n)
		{
			name[i]=m;
		}
    }
	puts(name);
}
