#include<stdio.h>
/*void main()
{
   int n,r;
   printf("enter a  number\n");
   scanf("%d",&n);
   while(n!=0)
   {
   	r=n%10;
	n=n/10;
	printf( "%d",r );
   }

}*/

// other way

void main()
{
	int n,r,rev=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("reverse num of %d is %d \n",n,rev );
}


