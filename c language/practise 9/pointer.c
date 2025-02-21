#include<stdio.h>
void main()
{
	int a=10,*p;
	p=&a;
	printf("address of a=%u\n",p);
	printf("value of a=%d",*p);
}