#include<stdio.h>

main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Nagetive Elements : ");
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d ,",a[i]);
		}
	}
}
