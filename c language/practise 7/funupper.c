#include<stdio.h>
#include<string.h>
void uppercase()
{
	char name[20];
	printf("enter name\n");
	gets(name);
	int l=strlen(name);
	for (int i = 0;i<l ; ++i)
	{
	   if (name[i]>=97 && name[i]<=122)
	   {
	      name[i]=name[i]-32;
	   }
	}
	puts(name);

}
void main()
{
    uppercase();
}