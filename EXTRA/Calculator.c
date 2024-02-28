#include<stdio.h >

main()
{
    int a,b,n;

repeat :

    printf("[1]..for Addition\n");
    printf("[2]..for Subtraction\n");
    printf("[3]..for Multiplication\n");
    printf("[4]..for Division\n");
    printf("[5]..for Modules\n");
    printf("[0]..for Exit\n");
    printf("\nEnter your choice : ");
    scanf("%d",&n);
    

    switch(n)
    {
    case 1:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nAdd of %d and %d  is : %d\n\n",a,b,a+b);

        goto repeat ;

    case 2:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nSub of %d and %d  is : %d\n\n",a,b,a-b);

        goto repeat ;

    case 3:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nMul of %d and %d  is : %d\n\n",a,b,a*b);

        goto repeat ;

    case 4:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nDiv of %d and %d  is : %d\n\n",a,b,a/b);

        goto repeat ;

    case 5:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nMod of %d and %d  is : %d\n\n",a,b,a%b);

        goto repeat ;

    case 0:
        printf("\nKal aana ");
        break;

    default:
        printf("\nPlease Enter valid input \n\n");
        goto repeat ;
    }



}
