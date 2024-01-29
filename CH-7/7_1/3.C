#include<stdio.h>
#include<conio.h>

main()
{
	char x;
	clrscr();

	printf("Enter any character : ");
	scanf("%c",x);

	if(x='a'|| x='e'||x='i'||x='o'||x='u'||x='A'||x='E'||x='I'||x='O'||x='U')
	{
		printf("%c is vowel ",x);
	}
	else
	{
		printf("%c is console ",x);
	}

	getch();
}