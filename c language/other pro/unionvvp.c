#include<stdio.h>
void add();
void sub();
int a=10,b=15;
void main()
{
   add();
   printf("\n");
   sub();
}
void add()
{
    int c=a+b;
    printf("%d",c);
}
void sub()
{
     int c=a-b;
    printf("%d",c);
}