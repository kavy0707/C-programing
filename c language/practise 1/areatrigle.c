#include <stdio.h>

void main(int argc, char const *argv[])
{
    int base, length;

    printf("enter the value of base\n");
    scanf("%d", &base);
    printf("enter the value of length");
    scanf("%d",&length);
    float area = 0.5 * base * length;
    printf("area=%f ", area);
}