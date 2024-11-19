#include<stdio.h>
#include<conio.h>

main()
{
	int n,digit=0;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		n/=10;
		digit++;
	}
	printf("Total Number of Digit : %d",digit);

	getch();
}
