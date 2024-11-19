#include<stdio.h>

int Sum(int a,int b)
{
	return a+b;
}
int Sub(int a,int b)
{
	return a-b;
}
int Mul(int a,int b)
{
	return a*b;
}
int Div(int a,int b)
{
	return a/b;
}
int Mod(int a,int b)
{
	return a%b;
}

int main()
{
	int choice,a,b;
	
	do
	{
		printf("Enter 1 For Sum\n");
		printf("Enter 2 For Sub\n");
		printf("Enter 3 For Mul\n");
		printf("Enter 4 For Div\n");
		printf("Enter 5 For Mod\n");
		printf("Enter 0 For EXIT\n");
		
		printf("Enter Choice : ");
		scanf("%d",&choice);
		
		if(choice == 0)
		{
			printf("EXIT!!");
			return;
		}
		
		printf("Enter a : ");
		scanf("%d",&a);
		printf("Enter b : ");
		scanf("%d",&b);
		
		switch(choice)
		{
			case 1 :
				printf("Sum of % and %d is %d",a,b,Sum(a,b));
				break;
				
			case 2 :
				printf("Sub of % and %d is %d",a,b,Sub(a,b));
				break;
				
			case 3 :
				printf("Mul of % and %d is %d",a,b,Mul(a,b));
				break;
				
			case 4 :
				printf("Div of % and %d is %d",a,b,Div(a,b));
				break;
				
			case 5 :
				printf("Mod of % and %d is %d",a,b,Mod(a,b));
				break;
				
			default :
				printf("Invalid Number...");		
		}
	}while(choice != 5);
}
