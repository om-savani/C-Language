#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int n;
	clrscr();

	P("Enter any number : ");
	scanf("%d",&n);

	if(n > 0)
	{
		P("%d is positive number",n);
	}
	else if(n < 0)
	{
		P("%d is nagetive number",n);
	}
	else
	{
		P("%d is neutral",n);
	}


	getch();
}
