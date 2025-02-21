#include <stdio.h>
void main()
{
	int cprice , sprice , item, cost,dis,price,rate,number, sellprice,userrate;
	cprice =1500;
	printf("enter number of items buy from company more than fifty=>");
	scanf("%d",&item);
	printf("\n");
		price = item * cprice;
		dis =  (item * cprice)/10;
		cost = price - dis;
		
	printf("%d \n",cost);
	printf("enter price for buy item =>");
	scanf("%d",&rate);
	printf("\n");
	if (rate <1350)
	{
		printf("sorry , we have not deal with you in this price \n");
	}
	printf("enter total number of items for buy =>");
	scanf("%d",&number);
	
	userrate = number * rate;
	printf("\n");
	
	sellprice = cost;
	int a=(number*cost)/item;
	int b=a/number;
	cost = cost - (number * b);
	cost=cost + userrate;
	if (cost>sellprice)
	{
		printf("shopkepper in profit\n");
	}
	else
	{
		printf("shopkepeer in lose");
	}

}