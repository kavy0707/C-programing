#include <stdio.h>
void main()
{
    int stu[5][3], i, j, tot[5] = {0, 0, 0, 0, 0}, avg[5];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("enter %d student %d subject marks=", i + 1, j + 1);
            scanf("%d", &stu[i][j]);
        }
    }
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            tot [i]= tot[i] + stu[i][j];
            avg[i] = tot[i] / 3;
        }
        
    }
    printf(" maths pps be  total  avg  \n");
     for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("  %d  ",stu[i][j]);
        
        }
        printf("  %d     %d\n",tot[i],avg[i]);
    }
}