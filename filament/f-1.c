#include<stdio.h>
main()
{
	char a[20],b[20];
	int len=0,i,j=0,f=0;
	printf("Enter String : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		len=len+1;
	}
	for(i=len-1;i>=0;i--)
	{
		b[j++]=a[i];
	}
	b[j++]='\0';
	
	for(i=0;i<=len;i++)
	{
		if(a[i]!=b[i])
		{
			f=1;
		}
	}
	if(f==0)
	{
		printf("String is Palindrome");
	}
	else
	{
		printf("String is Not Plaindrome");
	}
}
