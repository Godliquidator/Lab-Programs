#include <stdio.h>
int sum(int *x, int *y, int n)
{
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += *(x + i);
        s2 += y[i];
    }
    if (s1 == s2)
        return (0);
    else if (s1 > s2)
        return (1);
    else
        return (2);
}
int main()
{
    int p[] = {1, 2, 3, 4, 5, 6}, q[] = {1, 5, 7, 9, 0};
    int t = sum(p, q, 5);
    if (!t)
        printf("Sum of 5 elements of both the arrays are equal\n");
    else if (t == 1)
        printf("Sum of 5 elements of p array is more than that of q array\n");
    else
        printf("Sum of 5 elements of q array is more than that of p array\n");
}