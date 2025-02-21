#include<stdio.h>
void main()
{
    int acc,acs,choice,item,items=0,rate,number,userrate;
    int flag=0;
    printf("enter amount of bank account :- ");
    scanf("%d",&acc);
    acs=acc;
    while (flag == 0)
    {
       printf("enter 1 for buy items from company\n enter 2 for sell item /n 3. exit " );
       scanf("%d",&choice);
       if (choice == 1)

       {
        int cprice =1500;
	        printf("enter number of items buy from company more than fifty=>");
	        scanf("%d",&item);
	        printf("\n");
		int price = item * cprice;
		int dis =  (item * cprice)/10;
		int cost = price - dis;
		
	        printf("%d \n",cost);
         if (cost > acc )
            {
                printf("not enougth money in bank amount");
            }
        else
            {
                acc = acc-cost;
                items = item + items;
              


            }
            
       }
       else if (choice == 2)
       {
       	printf("enter price for buy item =>");
	scanf("%d",&rate);
	printf("\n");
	if (rate <1350)
	{
		printf("sorry , we have not deal with you in this price \n");
	}
	else{
	printf("enter total number of items for buy =>");
	scanf("%d",&number);
	
	userrate = number * rate;
	printf("\n %d",userrate);
	acc = userrate + acc;
	items = items - number;

	}
	printf("\n");
       }
       
       else if(choice == 3){
        flag=1;
       }
       

    }
    if (acs > acc )
    {
    	printf("shopkeeper is in lose ");
    	printf("\n %d",acc);
        printf("\n %d",items);
        int dif = acs-acc;
        printf("%d\n",dif );
    }
    else
    {
    	printf("shopkeeper is in profit ");
    	printf("\n %d",acc);
        printf("\n %d",items);
        int dif = acc-acs;
        printf("\n %d",dif );
    }
    

}
