#include <stdio.h>
#include <math.h>
primenumber(int n)
{
    int num, count, i, prime;
    for (num = 1; num <= n; num++)
    {
        if (num == 1)
        {
            printf("Number 1 is neither prime nor composite\n");
            continue;
        }
        count = sqrt(num);
        prime = 1;
        for (i = 2; i <= count; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\n", num);
        }
    }
}
int main()
{
    int n;
    printf("enter your input\n");
    scanf("%d", &n);
    printf("the prime numbers 1 to %d\n", n);
    primenumber(n);
    return 0;
}