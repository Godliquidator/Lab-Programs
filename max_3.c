//Find maximum among 3 numbers.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a=%d is maximum", a);
    }
    else if (b > a && b > c)
    {
        printf("b=%d is maximum", b);
    }
    else
    {
        printf("c=%d is maximum", c);
    }
    return 0;
}
