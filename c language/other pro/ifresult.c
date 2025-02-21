#include<stdio.h>
/*void main()
{
    int maths,science;

    printf("please enter your maths and  marks");
    scanf("%d",&maths);
    

    if (maths>=10)

    {
        printf("you are pass in maths\n");
        printf("you are win 15 rupees\n");
    }
    else if (maths<10)
    {
      printf("you are fail in maths\n");  
    }
    
  
  printf("please enter your science and  marks");
    scanf("%d" ,&science); 
 
   if (science>=11) 
   {
        printf("you are pass in science\n");
        printf("you are win 15 rupees\n");
    }
   
    else if (science<11)
    {
      printf("you are fail in science\n");  
    }
   
   
   
   
   
     if (maths>=10&&science>=11)
    {
        printf("you are pass in science and maths both\n");
        printf("you are win 45 rupees\n");
    } 
    else
    {
    printf("you are fail in science and maths\n");
    }



}*/

void main()
{
  int m,s;
  printf("enter the marks of maths :- ");
  scanf("%d",&m);

  printf("enter the marks of science ;-");
  scanf("%d",&s);
  if (m<35&&s<35)
  {
     printf("fail in maths ans science both");
    
    
  }
  else if (m>=35&&s<35)
  {
    printf("you are fail in science and pass in maths\n");
    printf("you win only 15 rupees");
  
  }
  else if (m<35&&s>=35)
  {
    printf("you are fail in maths and pass in science\n");
    printf("you win only 15 rupees");
  
  }
  else if (m>=35&&s>=35)
  {
    printf("you are pass in science and pass in maths both\n");
    printf("you win 45 rupees");
  
  }
  
  
  
}

