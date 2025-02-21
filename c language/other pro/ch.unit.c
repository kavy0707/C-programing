/*
kilometer to miles
inch to foot
cm to inch
inch to meter
pound to kilogram
*/
#include<stdio.h>
void main(int argc, char const *argv[])
{
	int choice;
	float km,miles,cm,inch,foot,m,pound,kilogram;

	printf("enter your choice  1. for km to miles 2. for inch to foot 3. for cm to inch 4. for inch to meter 5. for pound to kilogram");
	scanf("%d",&choice);

	if (choice==1)
	{
		printf("entyer the value of km\n");
		scanf("%f",&km);
		miles=km*0.6213;
		printf("miles=%f\n",miles);
	}
	else if (choice==3)
	{
		printf("enter the vakue of cm\n");
		scanf("%f",&cm);
		inch= 2.54*cm;
		printf("inch=%f\n",inch );
	}
	else if (choice==2)
	{
		printf("enter the vakue of inch\n");
		scanf("%f",&inch);
		foot= 12*inch;
		printf("foot=%f\n",foot );
	}
	else if (choice==4)
	{
		printf("enter the vakue of inch\n");
		scanf("%f",&inch);
		m= 39.37*inch;
		printf("meter=%f\n",m);
	}
	else if (choice==5)
	{
		printf("enter the vakue of pound\n");
		scanf("%f",&pound);
		kilogram=2.205*pound;
		printf("kilogram=%f\n",kilogram );
	}
	else
	{
		printf("enter the valid choice\n");
	}
		
}
