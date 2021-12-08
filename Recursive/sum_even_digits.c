#include <stdio.h>
int sum(int n)
{
    int r, sum = 0;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Sum of Even Digits: %d", sum(n));
}