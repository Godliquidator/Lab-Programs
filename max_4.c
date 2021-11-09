//Find maximum among 4 numbers.
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("Enter the value of d\n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("a=%d is maximum", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("b=%d is maximum", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("c=%d is maximum", c);
    }
    else
    {
        printf("d=%d is maximum", d);
    }
    return 0;
}
