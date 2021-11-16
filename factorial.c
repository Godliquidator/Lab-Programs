//WAP to print the factorial of given number.
#include <stdio.h>

int main()
{
    int f = 1, n;
    printf("Factorial of ?\n");
    scanf("%d", &n);
fact:
    f *= n;
    n--;
    if (n >= 1)
        goto fact;
    printf("Result: %d", f);

    return 0;
}