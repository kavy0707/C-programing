#include<stdio.h>

/*
1
22
333
4444
55555
*/

void main()
{
	int i,j,n;
	
	for (int i =1; i <=4; ++i)
	{
		for (int j=1; j<=i ; ++j)
		{
			printf("%d",i);
			
		}
		printf("\n");
	}
}