#include<stdio.h>

struct fruit
{
	char name[20];
	char color[20];
};

void main()
{
	int n,i;
	printf("Enter No Of Fruits : ");
	scanf("%d",&n);
	
	FILE *fp;
	fp = fopen("QUE-6.txt","w");
	
	struct fruit f[n];
	
	printf("\n\n\t--INPUT DETAILS--\n\n");
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter Name Of Fruit : ");
		gets(f[i].name);
		printf("Enter Color Of Fruit : ");
		gets(f[i].color);
	}
	
	fprintf(fp,"\n\n\t--FRUIT DETAILS--\n\n");
	fprintf(fp,"NAME\tCOLOR\n\n");
	fprintf(fp,"----\t\t-----\n\n");
	
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%s\t\t%s\n",f[i].name,f[i].color);
	}
	
	fclose(fp);
}
