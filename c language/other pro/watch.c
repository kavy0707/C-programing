#include<stdio.h>

void main()
{
    int second,minute, hours, seconds;

    printf("enter the value of second and value enter not in point");
    scanf("%d", &second);
    printf("\n");

    minute = second / 60;
    seconds = second % 60;

    printf("\n");

    hours = minute / 60;
    minute = minute % 60;
    printf("seconds=%d", seconds);
    printf("minute= %d", minute);
    printf("hours= %d", hours);

    float h, m, s;
    h = 1.5;
    m = h * 60;
    printf("ans is = %f", m);
}