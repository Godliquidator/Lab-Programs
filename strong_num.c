#include <stdio.h>
int main()
{
    int i, org, num, last, sum;
    long fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    org = num;
    sum = 0;
    while (num > 0)
    {
        last = num % 10;
        fact = 1;
        for (i = 1; i <= last; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if (sum == org)
    {
        printf("%d is STRONG NUMBER", org);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", org);
    }
    return 0;
}