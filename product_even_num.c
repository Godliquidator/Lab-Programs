#include <stdio.h>
int main()
{
    int n, i, p = 1, num;
    printf("How many numbers you want to enter ? ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            p = p * num;
        }
        i++;
    }
    printf("The product of even numbers among following numbers is %d", p);
    return 0;
}