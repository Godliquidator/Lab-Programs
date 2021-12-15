#include <stdio.h>
#include <math.h>
int main()
{
    int a[20], i, j, po = 0, ne = 0, o = 0, e = 0, p = 1, pn = 0;
    for (i = 0; i < 20; i++)
    {
        printf("Enter integer no:%d\n", i + 1);
        scanf("%d", &a[i]);
        if (a[i] >= 0)
        {
            po++;
            for (j = 2; j <= (int)sqrt(a[i]); j++)
            {
                if (a[i] % j == 0)
                {
                    p = 0;
                }
                if (p == 1 && a[i] != 0 && a[i] != 1)
                    pn++;
            }
        }
        if (a[i] <= 0)
            ne++;
        if (a[i] % 2 == 0)
            e++;
        if (a[i] % 2 != 0)
            o++;
    }
    printf("The no of:\nPositive integers = %d\nNegative integers = %d\nEven integers = %d\nOdd integers = %d\nPrime numbers = %d", po, ne, e, o, pn);
}