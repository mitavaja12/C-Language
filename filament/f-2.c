#include<stdio.h>

main()
{
	char str[50];
	
	printf("Enter String : ");
	scanf("%[^\n]",&str);
	
	int i,j,len=0,count;
	
	for(i=0;str!='\0';i++)
		len++;
	for(i=0;i<len;i++)
	{
		count=0;
		for(j=i+1;j<len;j++)
			if(str[i]==str[j])
				count++;
		str[i]='\0';
		printf("%s ===> %d",str[i],count);
	}
}
