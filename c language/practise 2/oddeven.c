#include <stdio.h>
void main()
{
    int num;
    printf("emter a num");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
}