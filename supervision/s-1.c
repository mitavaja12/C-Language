#include<stdio.h>

int main()
{
	int a,b,i;
	
	FILE *even,*odd;
	
	even = fopen("even_file.txt","w");
	odd = fopen("odd_file.txt","w");
	
	printf("Enter Starting Number : ");
	scanf("%d",&a);
	printf("Enter Ending Number : ");
	scanf("%d",&b);
	
	for(i = a ; i < b ; i++)
	{
		if(i%2==0)
		{
			fprintf("even %d ",i);
			printf("%d",i);
		}
		else
		{
			fprintf("odd %d ",i);
			printf("%d",i);
		}
	}
	fclose(even);
	fclose(odd);
}
