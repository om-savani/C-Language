#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	printf("\n\nAddition of %d and %d is\t\t: %d\n\n",a,b,a+b);
	printf("Subtraction of %d and %d is\t: %d\n\n",a,b,a-b);
	printf("Multiplication of %d and %d is\t: %d\n\n",a,b,a*b);
	printf("Division  of %d and %d is\t: %d\n\n",a,b,a/b);
	printf("Modulus of %d and %d is\t\t: %d",a,b,a%b);
}
