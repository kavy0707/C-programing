#include<stdio.h>
void main(int argc, char const *argv[])
{
    int a,b;
    printf("enter both values");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("enter 1. addition, 2.substraction , 3.multiplication , 4.division \n");
    int c,sum;
    scanf("%d",&c);
    if (c==1)
    {
        
      sum=a+b;
      printf("addition is %d",sum);  
    }
    else if (c==2)
    {
        
      sum=a-b;
      printf("subtraction is %d",sum);  
    }
    else if (c==3)
    {
        
      sum=a*b;
      printf("multiplication is %d",sum);  
    }

    else if (c==4)
    {
        
      sum=a/sb;
      printf("division is %d",sum);  
    }
    else{
        printf("enter valid value (1,2,3,4)");
    }
       
}
