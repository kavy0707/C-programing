#include<stdio.h>
void main()
{
	float i;
	float n;
	float sum=0;
	printf("enter a length of series\n");
	scanf("%f",&n);
	for (i=1;i<=n;i++)
	{
       sum=sum+(1/i);
	}
	printf("1+1/2+....+1/%f=%f\n",n,sum);
}