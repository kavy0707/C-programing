#include<stdio.h>
void main()
{
	int a;
	printf("enter a number beetwen 1 to 7\n");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
		printf("sunday\n");
		break;

		case 2:
		printf("monday\n");
		break;

		case 3:
		printf("tuesday\n");
		break;

		case 4:
		printf("wednesday\n");
		break;

		case 5:
		printf("thrusday\n");
		break;

		case 6:
		printf("friday\n");
		break;

		case 7:
		printf("saturday\n");
		break;

		default:
		printf("enter the valid value\n");
		

	}
}