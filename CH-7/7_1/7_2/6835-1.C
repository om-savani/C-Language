#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("Enter c : ");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
			printf("\n%d is minimum !!",a);
		}
		else
		{
			printf("\n%d is minimum !!",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("\n%d is minimum !!",b);
		}
		else
		{
			printf("\n%d is minimum !!",c);
		}
	}

	getch();
}