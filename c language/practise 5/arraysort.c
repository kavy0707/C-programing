#include<stdio.h>
void main()
{
    int a[100],i,j,c;
    for ( i = 0; i <= 4; i++)
    {
        printf("enter value");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=4; i++)
    {
        for ( j = i+1; j<=4; j++)
        {
            if (a[j]<a[i])
            {
               c=a[j];
               a[j]=a[i];
               a[i]=c;
            }
        }
    }
    printf("after sort");
    for ( i = 0; i <= 4; i++)
    {
       printf("\n%d",a[i]);   
    }

    
    

}