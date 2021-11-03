#include <stdio.h>
int main()
{
    int a, b, c, t;
    printf("Enter the value of side A:\n");
    scanf("%d", &a);
    printf("Enter the value of side B:\n");
    scanf("%d", &b);
    printf("Enter the value of side C:\n");
    scanf("%d", &c);
    t = (a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b);
    printf("Display 1 for the sides to be of Right-Angled Triangle, display 0 for NO.\n The value is %d.", t);
    return 0;
}