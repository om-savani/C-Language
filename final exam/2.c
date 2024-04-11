#include<stdio.h>

void main()
{
	int r,c,i,j,sum=0;
	
	printf("Enter Row : ");
	scanf("%d",&r);
	printf("Enter Column : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("\n\n\t--ARRAY INPUT--\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	
	printf("\nAverage Of All Elements : %d",sum/(r*c));
}
