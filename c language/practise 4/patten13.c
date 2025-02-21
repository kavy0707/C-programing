#include<stdio.h>

/*
    *
   * *
  * * *
 * * * *
* * * * *
* * * * * 
 * * * * 
  * * *
   * *
    *

*/

void main()
{
	int i,j,k,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{
		for (int k= n; k >=i ; --k)
		{
			printf(" ");
		}
		for (int j = 1; j <=i ; ++j)
		{
			printf(" *");
		}
		printf("\n");
	}
	for (int i = 1; i <=n; ++i)
	{
		for (int k= 1; k <=i ; ++k)
		{
			printf(" ");
		}
		for (int j = n; j >=i ; --j)
		{
			printf(" *");
		}
		printf("\n");
	}

}