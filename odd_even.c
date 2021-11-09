//WAP to input the number and check whether the inputed number is even or odd if the number is a positive integer.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a > 0)
    {
        if (a % 2 == 0)
        {
            printf("Number is even.\n");
        }
        if (a % 2 == 1)
        {
            printf("Number is odd.\n");
        }
    }
    printf("Enter a positive integer.Please Try Again !!");
    return 0;
}
