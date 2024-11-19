#include<stdio.h>
main()
{
	int a;
	printf("choose laugages.......\n");
	printf("1) english\n");
	printf("2) hindi\n");
	printf("3) gujrati\n");
	printf("enter your choice:");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("\n1) for internet recharge\n");
		printf("2) for top up recharge\n");
		printf("3) for special reacharge\n");
		printf("enter your choice:\n");
	switch(a)
	{
	case 1:
		printf("\n you have successfully done internet recharge!!");
		break;
	case 2:
		printf("\n you have successfully done top up recharge!!");
		break;
	case 3:
		printf("\n you have successfully done special recharge!!");
		break;
	}
	break;
	case 2:
		printf("\n\n1) internet recharge ke liye\n");
		printf("2) top up recharge ke liye\n");
		printf("3) special recharge ke liye\n");
		printf("enter your choice:");
		scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("\n apne safaltapurvak internet recharge kar liya hai!!");
		break;
	case 2:
		printf(" apne safaltapurvak top up recharge kar liya hai!!");
		break;
	case 3:
		printf(" apne safaltapurvak special recharge kar liya hai!!");
		break;
	}
	break;
	case 3:
		printf("\n1) internet na recharge mate\n");
		printf("2) top up na recharge mate\n");
		printf("3) special recharge mate\n");
		printf("enter your choice:");
		scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("\n1) tamaru internet recharge safaltapurvak thay gyu che!!\n");
		break;
	case 2:
		printf("2) tamaru top up recharge safaltapurvak thay gyu che!!\n");
		break;
	case 3:
		printf("3) tamaru special recharge safaltapurvak thay gyu che!!\n");
		break;
		}
	break;
	}
	getch();
	}


