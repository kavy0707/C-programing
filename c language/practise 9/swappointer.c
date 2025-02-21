#include<stdio.h>
void swap(int *a,int *b)
{
	int c;
	printf("before swap a=%d b=%d\n",*a,*b );
	c=*a;
	*a=*b;
	*b=c;
	printf("after  swap a=%d b=%d\n",*a,*b );

}
void main()
{
	int x,y;
	printf("enter value of a\n");
	scanf("%d",&x);
	printf("enter value b \n");
	scanf("%d",&y);
	swap(&x,&y);
}