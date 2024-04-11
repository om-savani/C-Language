#include<stdio.h>

void odd(int a[],int n);

void main()
{
	int n,i;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[n];
	
	printf("\n\t--ARRAY INPUT--\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	printf("\n\nOdd Elements : ");	
	odd(a,n);
}

void odd(int a[],int n)
{
	int j;
	
	for(j=0;j<n;j++)
	{
		if(a[j]%2==1)
		{
			printf("%d ",a[j]);
		}
	}
}
