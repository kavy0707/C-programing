#include<stdio.h>
void  main(int argc, char const *argv[])
{
   int rn[20],marks[20];
   for (int i = 0; i < 20; ++i)
   {
     printf("enter %d student roll no=\n",i+1 );
     scanf("%d",&rn[i]);
     printf("enter that student marks=\n");
     scanf("%d",&marks[i]);
   }
   printf(" roll no   ->  marks\n");
   for (int i = 0; i < 20; ++i)
   {
   	printf("  %d           %d\n", rn[i],marks[i] );
   }
}