#include<stdio.h>
main()
{
	int s,e,y;
	printf("enter first year :");
	scanf("%d",&s);
	printf("enter second year :");
	scanf("%d",&e);
	y=s;

	while (y<=e)
	{
		if(y %4==0 && y %100 !=0 || y%400==0)
		{
			printf("%d \n",y);
		}
		y++;
	}
	getch();
}
