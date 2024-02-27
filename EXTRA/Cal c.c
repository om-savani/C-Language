#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	char n;
	
	do
	{
		printf("Press + for Addition\n");
		printf("Press - for Addition\n");
		printf("Press * for Addition\n");
		printf("Press / for Addition\n");
		printf("Press %% for Addition\n");
		printf("Enter your choice : ");
		scanf("%c",&n);
		
		switch(n)
		{
			case '+':
				printf("\nEnter value of a: ");
				scanf("%d",&a);
				printf("Enter value of b: ");
				scanf("%d",&b);
				printf("\nSum of %d and %d ",a,b);
				printf("\nAns = %d ",a+b);
				//clrscr();
			break;
			
			case '-':
				printf("\nEnter value of a: ");
				scanf("%d",&a);
				printf("Enter value of b: ");
				scanf("%d",&b);
				printf("\nSub of %d and %d",a,b);
				printf("\nAns = %d ",a-b);
				//clrscr();
			break;
			
			case '*':
				printf("\nEnter value of a: ");
				scanf("%d",&a);
				printf("Enter value of b: ");
				scanf("%d",&b);
				printf("\nMul of %d and %d",a,b);
				printf("\nAns = %d ",a*b);
				//clrscr();
			break;
			
			case '/':
				printf("\nEnter value of a: ");
				scanf("%d",&a);
				printf("Enter value of b: ");
				scanf("%d",&b);
				printf("\nDiv of %d and %d",a,b);
				printf("\nAns = %d ",a/b);
				//clrscr();
			break;
			
			case '%':
				printf("\nEnter value of a: ");
				scanf("%d",&a);
				printf("Enter value of b: ");
				scanf("%d",&b);
				printf("\nMod of %d and %d",a,b);
				printf("\nAns = %d ",a%b);
				//clrscr();
			break;
			
			default :
				printf("\n!! Enter a valid choice !!");
				//clrscr();
		}
	}while(n=='0');
	
	printf("Kal aana !!");
}
