#include<stdio.h>

main()
{
	int A,B,C;
	
	printf("First Angle : ");
	scanf("%d",&A);
	printf("Second Angle : ");
	scanf("%d",&B);

	C = 180 - (A + B);

	printf("Third Angle : %d",C);
	
	getch();
}
