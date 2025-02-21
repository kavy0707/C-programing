#include<stdio.h>
void main()
{
    int a[10],i,max,min;
    for ( i = 0; i <10; i++)
    {
       printf("enter %d student marks\n",i+1);
       scanf("%d",&a[i]);
    }
    max=min=a[0];
    for ( i = 0; i < 10; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
           min=a[i];
        }
    }
    printf("max=%d\n min=%d",max,min);
    
    
}
