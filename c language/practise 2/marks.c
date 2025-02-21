#include<stdio.h>
void main(int argc, char const *argv[])
{
	int marks;
	printf("enter the marks\n");
	scanf("%d",&marks);
	if (marks>=80)
	{
		printf("grade=distinction\n");
		
	}
	else if  (marks>=60 && marks<80)
	{
      printf("grade=first class\n");
	}
	else if  (marks>=40 && marks<60)
	{
      printf("grade=second class\n");
	}
	else if (marks<40)
	{
		printf("grade=fail\n");
	}

}