#include<stdio.h>
void main()
{
    int w[5],h[5],i,c=0;
    for (i = 0; i < 5; i++)
    {
        printf("enter %d student hight",i+1);
        scanf("%d",&h[i]);
        printf("enter that student weight");
        scanf("%d",&w[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        if (h[i]>170 && w[i]<50)
        {
           c++;
        }
        
    }
    printf("student which weight<50 and hight >170 are %d",c);    
}