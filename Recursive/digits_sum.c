#include <stdio.h>

int digitsum(int n)
{
    if (n / 10 == 0)
        return n;
    else
        return (n % 10) + digitsum(n / 10);
}

void main()
{

    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int sum = digitsum(n);
    printf("\nThe sum of the digits is: %d ", sum);
}