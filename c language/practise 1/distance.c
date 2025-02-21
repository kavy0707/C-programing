#include<stdio.h>
void main()
{
    int a,t,d;
    printf("enter the value of accelaration");
    scanf("%d",&a);
    printf("enter the value of time");
    scanf("%d",&t);
    d=a*t+1/2*a*t*t;
    printf("distance=%d",d);

}