#include <stdio.h>
int main()
{
    int num = 0, s = 1, n, i, nt = num + s;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d,%d", num, s);
    for (i = 3; i <= n; i++)
    {
        printf(",%d", nt);
        num = s;
        s = nt;
        nt = num + s;
    }

    return 0;
}
