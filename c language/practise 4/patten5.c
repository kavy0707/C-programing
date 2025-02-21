#include<stdio.h>
/* 
55555
4444
333
22
1*/
void main()
{
	int i,j,n,a;
	printf("enetr the num of rows\n");
	scanf("%d",&n);
	a=n;
	for (int i = n; i >0; --i)
	{
		for (int j=1; j<=i ; j++)
		{
			printf("%d",i);
		}
		// a--;
		printf("\n");
	}
}