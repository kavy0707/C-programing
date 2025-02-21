#include<stdio.h>
void  main(int argc, char const *argv[])
{
	int i,j,k,u;
	for(i=69;i>=65;i--)
	{
		for (int j = 65; j <=i ;++j)
		{
			printf(" %c",j );
		}
		printf("\n");
	}
	for(i=65;i<=69;i++)
	{
		for (int j = 65; j <=i ;++j)
		{
			printf(" %c",j );
		}printf("\n");
	}

}