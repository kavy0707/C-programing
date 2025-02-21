#include<stdio.h>
/*
1
23
456
5678
*/


void main()
{
	int i,j,n,a=1;
	printf("enetr the num of rows\n");
	scanf("%d",&n);
	for (int i = 0; i <=n; ++i)
	{
		for (int j=0; j<i ; ++j)
		{
			printf(" %d",a);
			a++;
		}
		printf("\n");
	}
}
