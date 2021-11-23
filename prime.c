#include <stdio.h>
int main()
{
    int n, i, flag = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int t = n / 2;
    for (i = 2; i <= t; ++i)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (flag)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}