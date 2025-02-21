#include <stdio.h>
int fib(int n);
void main()
{
    int n,f;
    printf("enter to find length fibnaci series");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
       
        printf(" %d ", fib(i));
    }
}
int fib(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}