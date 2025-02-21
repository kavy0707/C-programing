#include<stdio.h>
/*void changevalue(int *address)
{
    *address=452;

}
void changevalue1(int *n)
{
    *n=656;

}

void main()
{
    int a,b;
    a=3;
    b=6;
    printf("the value of a=%d amd b=%d\n",a,b);
    changevalue(&a);
    changevalue1(&b);
    printf("the value of a=%d amd b=%d",a,b);
}*/

// swap the value 
void swap(int*a,int*b);
void main()
{
    int x,y;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);
    swap(&x,&y);
}
void swap(int*a,int*b)
{
    int c;
    printf("before swap *a=%d *b=%d",*a,*b);
    c=*a;
    *a=*b;
    *b=c;
    printf("\nafter swap *a=%d *b=%d",*a,*b);
}