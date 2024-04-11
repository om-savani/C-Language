#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[n];
	int *ptr[n];
	
	printf("\n\t--ARRAY INPUT--\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
		ptr[i] = &a[i];
	}

	printf("\n\nEven Elements : ");	
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",*ptr[i]);
		}
	}
	
}
