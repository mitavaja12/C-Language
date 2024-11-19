#include<stdio.h>
#include<conio.h>

main()
{
	int n,LN,sum;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	LN=n%10;

	while(n>10)
	{
		n/=10;
	}
	sum=n+LN;

	printf("Sum of First And Last Number is %d",sum);

	getch();
}
