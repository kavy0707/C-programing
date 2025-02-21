#include <stdio.h>
#include <string.h>
void main()
{
    char name[50], s;
    int i, f = 0, l;
    printf("enter name=");
    gets(name);
    printf("enter you want to delete character=");
    scanf("%c",&s);
    l = strlen(name);
    for (i = 0; i < l; i++)
    {
        if (name[i] == s)
        {
           for (int j = i; j <l; ++j)
           {
              name[j]=name[j+1];
           }
        }
    }
    puts(name);
    
}