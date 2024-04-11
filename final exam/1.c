#include<stdio.h>

void main()
{
	int sum,i,avg;
	int a[5];
	
	printf("\n\t--MARKS INPUT--\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter Subject %d Marks : ",i+1);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	
	avg = sum/5;
	
	printf("\nYou Got %d/500\n",sum);
	if(avg>=89)
	{
		printf("You Got A+ Grade");
	}
	else if(avg<=88 && avg>=79)
	{
		printf("You Got A Grade");
	}
	else if(avg<=78 && avg>=69)
	{
		printf("You Got B Grade");
	}
	else if(avg<=68 && avg>=59)
	{
		printf("You Got C Grade");
	}
	else if(avg<=58 && avg>=49)
	{
		printf("You Got D Grade");
	}
	else if(avg<=48 && avg>=33)
	{
		printf("You Got E Grade");
	}
	else
	{
		printf("You Are Failed");	
	}
}
