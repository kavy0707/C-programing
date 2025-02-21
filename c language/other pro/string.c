#include <stdio.h>
#include <string.h>
void main()
{
    int a;
    char s1[] = "kavy";
    char s2[] = {'k', 'a', 'v', 'y', '\0'};
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("the length of the string is %d\n", strlen(s1));
    
    char s3[] = "hello";
    a = strcmp(s3, s2);
    printf("value = %d", a);
    printf("\n the reverse of the s1 is %s", strrev(s1));
    
    char s4[50];
    strcpy(s4, s2);
    printf("\n the value of string 4 is %s", s2);
    
    char s5[50];
    printf("\nenter the value of s5");
    gets(s5);
    printf("the value is %s", s5);
}