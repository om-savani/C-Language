#include<stdio.h>

void inputSize();
int inputElet(int n,int a[]);
void sum(int n,int a[]);

void main()
{
	inputsize();
}

void inputSize()
{
	int n;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[n];
	inputelet(n,a);
	sum(n,a);
}

int inputElet(int n,int a[])
{
	int i;
	printf("\n\nARRAY INPUT");
	for(i=0;i<n;i++)
	{
		printf("Enter A[i] : ");
		scanf("%d",&a[i]);
	}
}

void sum(int n,int a[])
{
	int sum =0,i;
	for(i=0;i<n;i++)
	{
		sum += a[i];
	}
	printf("\n\nSUM : %d",sum);	
}


