#include<stdio.h>
main()
{
	int r,c;
	printf("Enter row size : ");
	scanf("%d",&r);
	printf("Enter column size : ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],i,j;
	printf("Enter Array's Elements : \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix of an Array : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("The Transpose matrix of an Array : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}
