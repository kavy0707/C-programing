#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("enter a length of series\n");
	scanf("%d",&n);
	for (int i = 0; i <=n; ++i)
	{
       sum=sum+(i*i);
	}
	printf("1^2+2^2....%d^2=%d\n",n,sum);
}