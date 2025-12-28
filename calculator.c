#include<stdio.h>
int main()
{
    float x,y,a;
    int d;
    printf("This is a Calculator to perform various Mathematics Operations");
    printf("\nEnter the first number: ");
    scanf("%f",&x);
    printf("Enter the second number: ");
    scanf("%f",&y);
    menu:
    printf("\nList of operations is \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Even OR odd\n6.Exit");
    printf("\nSelect operation to perform: ");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
        a=x+y;
        printf("\nSum =%f",a);
         goto menu;
    case 2:
        a=x-y;
        printf("\nSub =%f",a);
         goto menu;
    case 3:
        a=x*y;
        printf("\nProduct =%f",a);
         goto menu;
  case 4:
        if (y == 0.0f) {
            printf("\nError: Division by zero not allowed");
        } else {
            a = x / y;
            printf("\nDivision = %f", a);
        }
        goto menu;
    case 5: {
        printf("We will check even or odd only for integer part");
    int xi = (int)x;
    if (xi % 2 == 0)
        printf("\n%d is Even", xi);
    else
        printf("\n%d is Odd", xi);

    int yi = (int)y;
    if (yi % 2 == 0)
        printf("\n%d is Even", yi);
    else
        printf("\n%d is Odd", yi);

    goto menu;
}
     case 6:
                printf("Exiting program. Goodbye!\n");
                break;
    default:
        printf("Selected invalid operation");
        goto menu;
    }
       return 0;
}
