#include <stdio.h>
void main(int argc, char const *argv[])
{
	char num;
	printf("enter the character\n");
	scanf("%c",&num);
  printf("asci value=%d\n",num);
   
    if (num>=65 && num<=90)
    {
    	printf("it is uppercase letter");
    }
    else if (num>=97 && num<=122)
    {
    	printf("it is lower case letter\n");

    }
    else if (num>=48 && num<=57)
   {
       printf("digit\n");
   }
   else
   {
    printf("special simbol\n");
   }
}