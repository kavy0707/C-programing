#include <stdio.h>
#include <string.h>
void main()
{
    char name[50], s;
    int i, f = 0, l;
    printf("enter name=");
    gets(name);
    printf("enter you want to found character=");
    scanf("%c",&s);
    l = strlen(name);
    for (i = 0; i < l; i++)
    {
        if (name[i] == s)
        {
            f = 1;
        }
    }
    if (f == 1)
    {
        printf("\nmatch");
    }
    else
    {
        printf("not");
    }
}