#include<stdio.h>
struct time
{
	int hour;
	int minute;
	int second;
}t;
void main()
{
	int i;
	
    printf("enter hour=\n");
    scanf("%d",&t.hour);
	printf("enter minute=\n");
	scanf("%d",&t.minute);
    printf("enter second=\n");
	scanf("%d",&t.second);	
   
    printf("time= %d:%d:%d\n",t.hour,t.minute,t.second);

	
}