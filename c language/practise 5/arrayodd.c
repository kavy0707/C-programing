#include<stdio.h>
void main()
{
	int a[10],i,e=0,o=0;
	for (int i = 0; i < 10; ++i)
	{
		printf("enter any number\n");
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < 10; ++i)
	{
	    if (a[i]%2==0)
	    {
	    	printf("the number %d is even\n",a[i]);
	    	e++;
	    }
	    else
	    {
	    	printf("the number %d is odd\n",a[i]);
	    	o++;
	    }
	}
	printf("even num=%d \nodd num= %d\n",e,o );
}