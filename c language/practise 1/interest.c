#include<stdio.h>
void main()
{
    int p,r,n;
    printf("enter the principal of amount");
    scanf("%d",&p);
    printf("enter the rateb of interest");
    scanf("%d",&r);
    printf("enter the number of year");
    scanf("%d",&n);

int interest=p*r*n/100; 
    printf("simple interest i=%d*%d*%d/100=%d",p,r,n,interest);


}