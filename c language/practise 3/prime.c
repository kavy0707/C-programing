#include<stdio.h>
void main()
{
	int n,f=0;
	printf("enter a number\n");
	scanf("%d",&n);
	for (int i = 2; i <n ; ++i)
	{
		if (n%i==0)
		{
			f=1;
		}
	}
	if (f==1)
	{
		printf("it is not prime\n");
	}
	else
	{
		printf("it us prime\n");
	}
}