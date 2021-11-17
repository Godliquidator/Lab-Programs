#include <stdio.h>
int main()
{
    int n, r, sum = 0, i;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        r = n % i;
        if (r == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf(" %d is a Perfect Number", n);
    }
    else
    {
        printf("\n %d is not a Perfect Number", n);
    }
    return 0;
}