#include<stdio.h>

main()
{
	float c,f;

	printf("Tempreture in Celsius : ");
	scanf("%f",&c);

	f=(c*9/5)+32;

	printf("Tempreture in Fahrenheit : %.2f",f);
	
	getch();
}
