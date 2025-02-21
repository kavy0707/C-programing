#include<stdio.h>
struct person
{
	char name[20];
	char datejoin;
	int salary,i;
}p[5];
int main(int argc, char const *argv[])
{
	for(int i=0;i<3;i++)
	{
    printf("enter %d person name=\n",i+1 );
	gets(p[i].name);
	printf("enter %d person join date=\n",i+1 );
	gets(p[i].datejoin);
	printf("enter %d person salary=\n",i+1 );
	scanf("%d",&p[i].salary);
	}
	for( int i=0;i<3;i++)
	{
      printf("enter %d person name=%s\n",i+1,p[i].name );
      printf("enter %d person join date=%s\n",i+1,p[i].datejoin );
      printf("enter %d person salary=%d\n",i+1,p[i].salary);
	}
	return 0;
}