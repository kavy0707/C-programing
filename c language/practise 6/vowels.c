#include<stdio.h>
void main()
{
	char name;
	
	printf("enter character=");
	scanf("%c",&name);
	
	
    if (name=='a'|| name=='A'|| name=='i'||name=='I'||name=='o'||name=='O'||name=='U'||name=='u'|| name=='e'|| name=='E')
	{
		printf("vowels present\n");
	}
	else
	{
        printf("consonent\n");
	}
}