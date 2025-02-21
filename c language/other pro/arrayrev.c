#include<stdio.h>
void arrayrev(int arr[])
{
    int tem;
    for (int i = 0; i < 7/2; i++)
    {
        tem=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=tem;
    }
    
}
void main()
{
    int arr[8]={0,1,2,3,4,5,6};
    for (int i = 0; i < 7; i++)
    {
       printf("\n the position %d value id %d",i,arr[i]);
    }
    arrayrev(arr);
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
       printf("\n the position %d value id %d",i,arr[i]);
    }
}