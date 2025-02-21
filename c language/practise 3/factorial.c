#include<stdio.h>
void main()
{
	int n,fact=1;
	printf("enter the you want the factorial\n");
	scanf("%d",&n);
	for (int i = n; i >=1 ; i--)
	{
		fact=fact*i;
	}
	printf("factrial of number is %d\n",fact );
}