#include<stdio.h>
void main()
{
	/*int a=10;
	int *ptra=&a;
	int *ptr2=NULL;

    
    printf("the address of the a is %p\n",&a);
    printf("the address of the pointer is %p\n",&ptra);
    printf("the address of garbage is %p\n",&ptr2);
    
    printf("the value of the a is %d\n",*ptra);*/

    printf("lets learn the array of pointer\n");
    int array[6]={1,2,3,4,5,6};
    printf("the address of first element of array is %d\n",&array[0]);
    printf("the address of first element of array is %d\n",array);
    printf("the address of second element of array is %d\n",&array[1]);
    printf("the address of second element of array is %d\n",array+1);

    printf("the value of first element of array is %d\n",*(&array[0]));
    printf("the value of first element of array is %d\n",*(array));
    printf("the value of second element of array is %d\n",*(&array[1]));
    printf("the value of second element of array is %d\n",*(array+1));
    int k[5]={1,2,3,4,5};
    int *p=&k[0];
    for ( int i = 0; i <5; i++)
    {
       printf("adress=%u value=%d\n",p,*p);
       p++;
    }
    


}