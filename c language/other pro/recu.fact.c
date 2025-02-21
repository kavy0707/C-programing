#include <stdio.h>
int fact(int n);
int n=5;

void main()
{
    
    int f,n;
    printf("enter num to find factorial");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial=%d",f);

}
int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}