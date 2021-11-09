//Take 2 numbers from the user and display max and min.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number a\n");
    scanf("%d", &a);
    printf("Enter the number b\n");
    scanf("%d", &b);
    if (a > b)
    {
        printf("a=%d is maximum.\n", a);
        printf("b=%d is minimum.\n", b);
    }
    else
    {
        printf("b=%d is maximum.\n", b);
        printf("a=%d is minimum.\n", a);
    }
    return 0;
}
