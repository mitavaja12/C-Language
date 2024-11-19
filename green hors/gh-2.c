#include<stdio.h>

main()
{
	int BS,HRA=10,DA=5,TA=8,GS;
	
	printf("Enter Base Salary : ");
	scanf("%f",&BS);

	HRA=BS*10/100;
	DA=BS*5/100;
	TA=BS*8/100;

	GS=HRA+DA+TA+BS;

	printf("Gross Salary : %.2f",GS);

	getch();
}
