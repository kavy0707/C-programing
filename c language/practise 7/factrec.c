#include<stdio.h>
int n;
int  fact(int n)
{
    if (n==0 || n==1)
    {
       return 1;
    }
    else 
    {
    	return n*fact(n-1);
    }
}
void main()
{
  	printf("enter num find fact\n");
  	scanf("%d",&n);
  	int f=fact(n);
  	printf("factorial=%d\n",f );
}