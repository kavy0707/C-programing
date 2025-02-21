#include<stdio.h>
void swap();
void swap()
{
	int a,b;
	printf("enter value of a \n");
	scanf("%d",&a);

	printf("enter value of a \n");
	scanf("%d",&b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("after swap a=%d b=%d\n",a,b);
}
void main()
{
	swap();
}