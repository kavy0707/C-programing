#include<stdio.h>
void main()
{
    int a,b,c;
    int p[a][b],q[b][c],mul[a][c];
    printf("enter row size");
    scanf("%d",&a);
    printf("enter collom size");
    scanf("%d",&b);
   
    printf("enter collom size");
    scanf("%d",&c);
    printf("\nenter p matrix");
    for (int  i = 0; i < a; i++)
    {
        for (int j = 0; i < b; j++)
        {
            scanf("%d",p[i][j]);
        }
               
    }
    printf("\nenter q matrix");
    for (int  i = 0; i < b; i++)
    {
        for (int j = 0; i < c; j++)
        {
            scanf("%d",q[i][j]);
        }       
    }
   
    for (int  i = 0; i <a; i++)
    {
        for (int  j = 0; i <c; j++)
        {
           for (int  k = 0; k < a; k++)
           {
            mul[i][j]=p[a][k]*q[k][j];
           }
           
        }
     }
      for (int  i = 0; i <a; i++)
    {
        for (int  j = 0; i <c; j++)
        {        
         printf("matric=%d",mul[a][c]);  
        }
     }
}
