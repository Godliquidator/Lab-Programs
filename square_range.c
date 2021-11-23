#include <stdio.h>
#include <math.h>
int main()
{
    int i, l, u, sum = 0;
    printf("Enter the first number:");
    scanf("%d", &l);
    printf("Enter the second number:");
    scanf("%d", &u);

    printf("Perfect Squares between %d and %d: \n", l, u);
    i = l;
    while (i <= u)
    {
        float sqr = sqrt(i);
        if (sqr - floor(sqr) == 0)
        {
            printf("%d ", i);
            sum += i;
        }
        i++;
    }
    printf("\nThe sum of given perfect squares is %d.", sum);
    return 0;
}