#include<stdio.h>

#include<string.h>
void main()
{
char s1[20], s2[20]; int i;
printf("Enter first string");
gets(s1);
printf("Enter second string");
scanf("%s",s2);
i=strlen(s1);
printf("ength of string %d",i);
printf("String joint %s",strcat(s1,s2));
printf("String copy %s",strcpy(s1,s2));
i=strcmp(s1,s2);
if(i>0)
{
printf("String 1 is greater than string 2");
}
else if(i<0)
{
	printf("String 1 is less than string 2");
}
else
{
printf(" Both are equal");
}
printf("String lower %s",strlwr(s1));
printf("String upper %s",strupr(s2));
}