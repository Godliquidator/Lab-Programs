#include <stdio.h>

int findgcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        findgcd(b, a % b);
}
void main()
{

    int a, b;
    printf("enter the two numbers: ");
    scanf("%d %d", &a, &b);
    int gcd = findgcd(a, b);
    printf("\nThe value of the gcd is: %d", gcd);
}