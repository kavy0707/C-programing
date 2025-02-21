#include<stdio.h>
void main(int argc, char const *argv[])
{
	int no1,no2,no3;
	printf("enter the value of no1\n");
	scanf("%d",&no1);
	printf("enter the value of no2\n");
	scanf("%d",&no2);
	printf("enter the value of no3\n");
	scanf("%d",&no3);
	if (no1>no2)
	{
		if(no1>no3)
		{
			printf("no 1 is max\n");
		}
		else
		{
           printf("no 3 is max\n");
		}
	}
	else
	{
		if (no2>no3)
		{
			printf("no 2 is max\n");
		}
		else
		{
			printf("no 3 is max\n");
		}
	}
}