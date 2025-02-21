#include<stdio.h>
struct person
{
	char name[20];
	char datejoin[20];
	int salary;
}p[5];
void main()
{
	int i;
	for(i=0;i<3;i++)
	{
    printf("enter %d person name=\n",i+1 );
	gets(p[i].name);
	
	printf("enter %d person join date=\n",i+1 );
	gets(p[i].datejoin);
	
	printf("enter %d person salary=\n",i+1 );
	scanf(" %d ",&p[i].salary);
	}
	for(i=0;i<3;i++)
	{
      printf("enter %d person name=%s\n",i+1,p[i].name );
      printf("enter %d person join date=%s\n",i+1,p[i].datejoin );
      printf("enter %d person salary=%d\n",i+1,p[i].salary);
	}
}