#include<stdio.h>
int static a=10;
void sum();
int main(int argc, char const *argv[])
{
	a=5;
	printf("value od a=%d\n",a );
	printf("using function\n");
	sum();
	return 0;
}
void sum()
{
	printf("value a=%d\n",a);
}