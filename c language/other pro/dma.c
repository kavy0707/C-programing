/*
types :
malloc p = (p -type*) malloc(n*size in bite)
calloc  p= (p-type*) callocn(n,size of bite)
free   free(p)
realloc p= (p-type*) realloc(p,new size of bite)
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    // use of malloc
    int *p, n;
    /*
    p = (int *)malloc(n * sizeof(int));
    printf("enter size of array you want");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter %d value=", i);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nat %d value=%d", i, p[i]);
    }*/
    
    // use of calloc
   
   
     /*  p=(int *)calloc(n,sizeof(int));
    printf("enter size of array you want");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter %d value=", i);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n at %d value=%d", i, p[i]);
    }*/

    // use of realloc
    printf("enter new value of n");
    scanf("%d",&n);
    p=(int *)realloc(p,n*sizeof(int));
    printf("enter size of array you want");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter new value %d value=", i);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nat new value %d value=%d", i, p[i]);
    }
    free(p);

}