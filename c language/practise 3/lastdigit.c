#include<stdio.h>
void main()
{
	int a,ld;
	printf("enter a num\n");
	scanf("%d",&a);
	ld=a%10;
	if (ld%2==0)
	{
		printf("last digit is even\n");
	}
	else 
	{
		printf("last digit is odd\n");
	}

}