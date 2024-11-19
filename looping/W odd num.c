#include<stdio.h>

main()
{
	int a,b;

	printf("enter any number :");
	scanf("%d",&b);

	while(a>=b)
	{
		a--;
	}
	
		if(a%2!=0)
		{
			printf("Even...");
		}
		else
		{
			printf("Odd...");
		}
 }
