#include<stdio.h>
void main()
{

	/*do
	{
	  float a,b,sum,avg,choice;
	  printf("\nenter the value a nad b  \n");
	  scanf("%f",&a);
	  scanf("%f",&b);
      sum=a+b;
      avg=sum/2;
      printf("\nsum=%d\n avg=%d",sum,avg);
      printf("choice 1.continue 0.stop\n");
      scanf("%f",&choice);
      if (choice==0)
      {
      	break;
      }
	}while(n!=0);*/

   //goto statement
   
   
     
      float a,b,sum,avg;
      repeat:
	  printf("\n enter the value a nad b  \n");
	  scanf("%f",&a);
	  scanf("%f",&b);
      sum=a+b;
      avg=sum/2;
      printf("\nsum=%f\n avg=%f",sum,avg);
      int choice;
      printf("choice 1.continue 0.stop\n");
      scanf("%d",&choice);
      if(choice==1)
      {
	     goto repeat;
      }
      else if(choice==0)
      {
	     printf("envalid choice\n");
      }
   
}