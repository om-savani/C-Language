#include<stdio.h>

void cube(int r,int c,int *ptr[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			*ptr[i][j] = (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]) ;
		}
	}	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",*ptr[i][j]);
		}
		printf("\n");
	}	
	
}

void main()
{
	int r,c,i,j;
	printf("Enter Row : ");
	scanf("%d",&r);
	printf("Enter Column : ");
	scanf("%d",&c);
	int a[r][c];
	int *ptr[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			*ptr[i][j] = &a[i][j];
		}
	}

	cube(r,c,*ptr);
}
