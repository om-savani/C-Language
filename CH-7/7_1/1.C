#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&a);
	printf("Enter any number : ");
	scanf("%d",&b);

	if(a>b)
	{
		printf("%d is minimum number",b);
	}
	else
	{
		printf("%d is minimum number",a);
	}

	getch();

}