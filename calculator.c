//WAP to program to input any two integers, provide a menu to the user to select the option as add,subtract,multiply,divide and display the result accordingly.
#include <stdio.h>
int main()
{
    float a, b, o;
    printf("Enter the number a\n");
    scanf("%f", &a);
    printf("Enter the number b\n");
    scanf("%f", &b);
    printf("Choose the desired operation you wish to perform.\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%f", &o);
    if (o == 1)
    {
        printf("Result is %0.2f\n", a + b);
        return 0;
    }
    if (o == 2)
    {
        printf("Result is %0.2f\n", a - b);
        return 0;
    }
    if (o == 3)
    {
        printf("Result is %0.2f\n", a * b);
        return 0;
    }
    if (o == 4)
    {
        printf("Result is %0.2f\n", a / b);
        return 0;
    }
    printf("Invalid Input.");
    return 0;
}
