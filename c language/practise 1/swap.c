#include <stdio.h>
void main()
{
    int a, b, tem;
    printf("enter a value of a");
    scanf("%d", &a);
    printf("enter a value of b");
    scanf("%d", &b);

    printf("before swap the value of a is %d and the value of b is %d\n", a, b);
    // tem=a;
    a = a + b;
    // a=b;
    b = a - b;
    // b=tem;
    a = a - b;
    printf("after swap value of a is %d and value of b is %d", a, b);
}