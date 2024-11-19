#include<stdio.h>

int Lengthofstring(char *ptr)
{
	int Length=0;
	
	do{
		Length++;
		ptr++;
	}while(*ptr!=NULL)
	return Length;
}

int main()
{
	char[100];
	
	printf("Enter String : ");
	scanf("%s",ptr);
	
	int Length=Lengthofstring(ptr);
	
	printf("Length of String : %d",Length);
	
	return 0;
}
