#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("A=> %d\nB=> %d",a,b);
}
