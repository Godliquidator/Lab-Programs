#include <stdio.h>
int main()
{
    int u, l, i;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d", &u);
    printf("The integers between %d and %d are:\n", l, u);
    i = l + 1;
    while (i < u)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}