#include<stdio.h>

struct marksheet
{
	int Rnum;
	char name[20];
	int che;
	int math;
	int phy;
};

int main()
{
	struct marksheet data[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter details of student = %d : \n",i+1);
		printf("Roll no : ");
		scanf("%i",&data[i].Rnum);
		
		fflush(stdin);
		
		printf("Enter Name : \n");
		scanf("%[^\n] ",&data[i].name);
		
		printf("Chemistry : \n");
		scanf("%d",&data[i].che);
		printf("Mathematics : \n");
		scanf("%d",&data[i].math);
		printf("Physics : \n");
		scanf("%d",&data[i].phy);
	}
	
	printf("\n-----Result-----\n");
	
	for(i=0;i<5;i++)
	{
		printf("%c : \n",data[i].name);
		printf("Chemistry : %d\n",data[i].che);
		printf("Mathematics : %d\n",data[i].math);
		printf("Physics : %d\n",data[i].phy);
		printf("Total : %d/300 \n",data[i].che + data[i].math + data[i].phy);
		printf("Pr : %d\n",(data[i].che + data[i].math + data[i].phy)/300 * 100);
	}
}
