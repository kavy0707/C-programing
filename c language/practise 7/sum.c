#include<stdio.h>
void sum(int n);
int n;
void main()
{
  printf("enter to find sum n number");
  scanf("%d",&n);
  sum(n);
}
void sum(int n)
{
	int tot=0;
	for (int i = 1; i <= n; ++i)
	{
		tot=tot+i;
	}
	printf("sum=%d\n",tot );
}