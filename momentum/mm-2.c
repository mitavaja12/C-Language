#include<stdio.h>
#include<conio.h>

main()
{
	int unit,total;
	float bill,sc;
	clrscr();

	printf("Enter Electricity Unit : ");
	scanf("%d",&unit);

	if(unit>=0 && unit<=50)
	{
		total=unit*0.5;
	}
	else if(unit>=51 && unit<=150)
	{
		total=(unit-50)*0.75+25;
	}
	else if(unit>=151 && unit<=250)
	{
		total=(unit-150)*1.2+100;
	}
	else if(unit>=251)
	{
		total=(unit-250)*1.5+220;
	}

	sc=total*0.2;

	bill=total+sc;

	printf("Total bill is %.2f",bill);

	getch();
}
