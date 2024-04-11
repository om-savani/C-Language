#include<stdio.h>

struct laptop
{
	char c_name[30];
	char p[30];
	float prize;
};

void main()
{
	int n,i;
	
	printf("Enter NO Of Laptops : ");
	scanf("%d",&n);
	fflush(stdin);
	struct laptop l1[n];
	
	printf("\n\n\t--INPUT DETAILS--\n\n");
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter Company Name : ");
		gets(l1[i].c_name);
		printf("Enter Processor : ");
		gets(l1[i].p);
		printf("Enter Prize : ");
		scanf("%d",&l1[i].prize);
		printf("\n");
	}
	
	system("cls");
	printf("\n\n\t--LAPTOP DETAILS--\n\n");
	
	printf("COMPANY\tPROCESSOR\tPRIZE\n");
	printf("-------\t---------\t-----\n");
	
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%s\t%.2f\n",l1[i].c_name,l1[i].p,l1[i].prize);
	}
	
}
