#include <stdio.h>
#include <string.h>
struct student
{
	int id;
	int marks;
	char favchar;
	char s1[25];
};
void main()
{
	struct student kavy, om, gaurav;
	kavy.id = 1;
	om.id = 2;
	gaurav.id = 3;
	kavy.marks = 90;
	om.marks = 80;
	gaurav.marks = 79;
	kavy.favchar = 'a';
	om.favchar = 'b';
	gaurav.favchar = 'c';
	printf("kavy= %d %d %c\n", kavy.id, kavy.marks, kavy.favchar);
	printf("om= %d %d %c\n", om.id, om.marks, om.favchar);
	printf("gaurav= %d %d %c\n", gaurav.id, gaurav.marks, gaurav.favchar);
	strcpy(kavy.s1, "kavy is the good boy");
	printf("%s\n", kavy.s1);

	// typedef <previous name> <alias name>

	/*typedef int* intpointer;
	intpointer a,b;
	int c;
	a=&c;
	b=&c;
	printf("%d\n",a);
	printf("%d",b);*/
}