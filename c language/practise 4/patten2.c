#include<stdio.h>
/* 
   *
  * *
 * * *
 */


void main()
{
	int i,j,n,k;
	printf("enter the num of rows\n");
	scanf("%d",&n);
	for (int i = 0; i <=n; ++i)
	{
		for (int j= n; j>=i ; --j)
		{
			printf(" ");
        }
		 for ( k =0; k<=i; k++)
        {
             printf("* ");
        }
        
        printf("\n");
	}
}
