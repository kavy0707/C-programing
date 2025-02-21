#include<stdio.h>
void main(int argc, char const *argv[])
{
	int marks[2][5];

	
	for ( int i = 0; i <2; i++)
	{   

		for (int j = 0; j <5 ; ++j)
		{
			printf("marks of student %d %d is \n",i,j );
			scanf("%d\n",&marks[i][j]);
			printf("\n");
			
		}
	}
	for ( int i = 0; i <2; i++)
	{   

		for (int j = 0; j <5 ; ++j)
		{
			printf("the marks of %d %d is value is %d\n",i,j,marks[i][j]);
		}
	}		
}