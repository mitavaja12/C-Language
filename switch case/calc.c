#include<stdio.h>
main()
{
	int n,choice,a,b;
	
	printf("1) for +\n");
	printf("2) for -\n");
	printf("3) for *\n");
	printf("4) for /\n");
	printf("5) for %\n");
	printf("6) for exit\n");
	
	printf("enter your choice:");
	scanf("%d",&choice);
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	
	switch(choice)
	{
	
	
		case 1:
		printf("sum:%d\n",a+b);
		a+b;
		break;
		
		case 2:
		printf("sub:%d\n",a-b);
		a-b;
		break;
		
		case 3:
		printf("mul:%d\n",a*b);
		a*b;
		break;
		
		case 4:
		printf("div:%d\n",a/b);
		a/b;
		break;
		
		case 5:
		printf("per:%d\n",a%b);
		a%b;
		break;
		
		case 6:
		printf("exit\n");
	
		break;
		
	}
		
	
}
