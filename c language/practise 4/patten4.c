#include<stdio.h>
/*
54321
4321
321
21
1
*/
void main()
{
	int i,j,n;
	printf("enetr the num of rows\n");
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{
		for (int j=n; j>=i ; --j)
		{
			printf("%d",j);
		}

		printf("\n");
	}
}