#include <stdio.h>
int main()
{
    int i, j, n, c;
    printf("Enter the maximum range: ");
    scanf("%d", &n);
    printf("Prime Numbers from 1 to %d are: \n", n);
    for (i = 2; i <= n; i++)
    {
        c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d,", i);
        }
    }

    return 0;
}
