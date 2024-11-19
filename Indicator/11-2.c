#include<stdio.h>

int findcube(int r,int c,int a[r][c])
{
	int i,j,*ptr[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ptr[i][j]=&a[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",(*ptr[i][j] * (*ptr[i][j]) * (*ptr[i][j])));
		}
	}
}

void main()
{
	int i,j,r,c,ptr,a[r][c];
	
	printf("Enter Size of Row : ");
	scanf("%d",&r);
	printf("Enter Size of Column : ");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	findcube(r,c,a[r][c]);
}
