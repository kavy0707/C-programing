#include<stdio.h>
struct stu
{
    int rn;
    int marks[3];
}s[3];
void main()
{
    int i,j;
    for (int  i = 0; i <3; i++)
    {
        printf("enter student roll no");
        scanf("%d",&s[i].rn);
        for (int  j= 0; j < 3; j++)
        {
            printf("enter  %d subject marks",j+1);
            scanf("%d",&s[i].marks[j]);
        }       
    }
    int tot=0;
    for(i=0;i<3;i++)
    {   
        tot=0;
        for ( j= 0; j <3; j++)
        {
           tot=tot + s[i].marks[j];
        }
        printf("\n student roll no is =%d",s[i].rn);
        printf("\n total marks obtain by student =%d",tot);
    }
    
    
}