#include <stdio.h>
int main()
{
    int i, a[5] = {1, 2, 3, 4, 5}, *b, sum = 0;
    b = a;
    for (i = 0; i < 5; i++)
    {
        sum += *(b + i);
    }
    printf("%d", sum);
    return (0);
}