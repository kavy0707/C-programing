#include<stdio.h>
/*
*****
****
***
**
*
*/
void main()
{
	int i,j,n;
	printf("enetr the num of rows\n");
	scanf("%d",&n);
	for (int i = 0; i <=n; ++i)
	{
		for (int j= n; j>=i ; --j)
		{
			printf("*");
		}
		printf("\n");
	}
}
