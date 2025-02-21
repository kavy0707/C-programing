#include<stdio.h>
struct stu
{
	char name[20];
	char branch[20];
	int totmarks;
}s[10];
void main()
{
	int i;
	for(i=0;i<10;i++)
	{
    printf("enter %d student name=\n",i+1 );
	gets(s[i].name);
	
	printf("enter %d student branch=\n",i+1 );
	gets(s[i].branch);
	
	printf("enter %d student totmarks=\n",i+1 );
	scanf(" %d ",&s[i].totmarks);
	}
	for(i=0;i<3;i++)
	{
      printf("enter %d student name=%s\n",i+1,s[i].name );
      printf("enter %d student=%s\n",i+1,s[i].branch);
      printf("enter %d student total marks=%d\n",i+1,s[i].totmarks);
	}
}