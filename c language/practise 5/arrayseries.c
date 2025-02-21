#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	float a[100],tot=0,hm,gm,mul=1,n,inv=0,avg;
	printf("enter value of n");
	scanf("%f",&n);
	for (int i = 0; i < n; ++i)
	{
       printf("enter value\n");
       scanf("%f",&a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
        tot=tot+a[i];
        mul=mul*a[i];
        inv=inv+1/a[i];
    }
	avg=tot/3;
	hm=n/inv;
	gm=pow(mul,1/n);

	printf(" \navg=%f \nhm=%f \n   gm=%f\n",avg,hm,gm );

}