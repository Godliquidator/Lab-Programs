#include <stdio.h>
int main()
{
    int sum = 0, n, count = 0, i;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%d", &n);
        if (n % 2 == 1)
        {
            count++;
            sum += n;
        }
    }
    printf("Number of odd numbers is %d and their sum is %d.", count, sum);
    return 0;
}
