#include<stdio.h>
/*
    1
   2 2
  3 3 3
 4 4 4 4
 */


void main()
{   
	int a=1;

	for (int i = 1; i <=4; ++i)
	{
		for (int j= 4; j >=i ; --j)
		{
			printf(" ");
		}
		for (int k=1;k<=i; ++k)
		{
			printf(" %d",i );
		}
		printf("\n");
	}
}