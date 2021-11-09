//WAP to print the largest among three numbers.
#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    printf("Largest value is %d", max);
    return 0;
}
