//Ques- Write a function which will take two integer values and one operator.
// 9,3, +   --> 12
// 9,4, *   --> 36
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>
void calc(int a, int b, char c) //Declaring a function.
{
    int z;
    switch (c) //comparing character as operator.
    {
    case '+':
        z = a + b;
        printf("The sum of %d and %d is %d", a, b, z);
        break;

    case '-':
        z = a - b;
        printf("The difference of %d from %d is %d", b, a, z);
        break;

    case '*':
        z = a * b;
        printf("The multiplication of %d and %d is %d", a, b, z);
        break;

    case '/':
        z = a / b;
        printf("The quotient of the division of %d by %d is %d", a, b, z);
        break;

    case '%':
        z = a % b;
        printf("The remainder of the division of %d by %d is %d", a, b, z);
        break;

    default:
        printf("Invalid Option Chosen......Please Try Again !!");
        break;
    }
}

int main()
{
    int a, b;
    char s;
    printf("Enter two numbers:\n");
    printf("Enter no. 1: "); //Input number 1
    scanf("%d", &a);
    printf("Enter no. 2: "); //Input number 2
    scanf("%d", &b);
    printf("Enter the character of the operator: "); //Input the operator
    printf("(+ for addition, - for subtractiion, * for multiplication,\n");
    printf("/ for division or finding quotient, %% for finding remainder):\n");
    scanf(" %c", &s); // Space before %c to avoid taking enter as input from previous scanf

    calc(a, b, s); //Calling function.

    return 0;
}