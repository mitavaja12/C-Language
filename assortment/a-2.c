#include<stdio.h>

main()
{
	int r,c;
	printf("Enter Row : ");
	scanf("%d",&r);
	printf("Enter Column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j,max;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if( max < a[i][j] )
			{
				max=a[i][j];
			}
		}
		printf("\n");
	}
	printf("Largest Element : %d",max);
}
