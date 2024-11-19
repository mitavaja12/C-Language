#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Row Size : ");
	scanf("%d",&r);
	printf("Enter Column Size : ");
	scanf("%d",&c);

	int a[r][c],i,j,n1,sum1=0,n2,sum2=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}	
	printf("Enter Row Number : ");
	scanf("%d",&n1);
	printf("Elements of row %d: ",n1);
	
	for(j=0;j<c;j++)
	{
		printf("%d",a[n1][j]);
		sum1 += a[n1][j];
	}
	printf("\nsum of row %d : %d",n1,sum1);
	printf("\n");

	
	printf("Enter Column Number : ");
	scanf("%d",&n2);
	printf("Elements of Column %d : ",n2);
	
	for(i=0;i<r;i++)
	{
		printf("%d",a[i][n2]);
		sum2 += a[i][n2];
	}
	printf("\nsum of row %d : %d",n2,sum2);
	printf("\n");
}
