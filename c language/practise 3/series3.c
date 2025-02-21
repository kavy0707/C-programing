#include<stdio.h>
#include<math.h>
void main()
{
	float x,sum=1,i,fact=1;
	printf("enter a length of series\n");
	scanf("%f",&x);
	for (int i =1; i <=9; ++i)
	{
		fact=fact*i;
       sum=sum+pow(-x,i)/fact;
	}
	printf("1-x+x^2/2!....-%f^9/9!=%f\n",x,sum);
}