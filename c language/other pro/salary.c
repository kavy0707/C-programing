#include<stdio.h>
void main()
{
	int em[30],h[30],hd[30],over[30];
	for (int i = 0; i <5 ; ++i)
	{
      printf("enter the employs name %d ",i);
	  scanf("%s",&em[i]);
	}
	for (int j = 0; j <5 ; ++j)
	{
      printf("enter the employs work hours %c\n",em[j]);
      scanf("%d",&h[j]);
      printf("enter the employs overtime work hours %d\n",j);
      scanf("%d",&over[j]);
    }
	  
	
	
	printf("per hours work salary=100 rupees\n");
	for (int k = 0; k <5 ; ++k)
	{
		int salary[5],hd[k] = 30;
     h[k]=hd[k]+over[k]+h[k];
	 salary[k] = h[k] * 100;
	
	  printf("salary of %c = %d \n",em[k],salary[k] );
	}
	

	
}