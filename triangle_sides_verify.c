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
    t = ((a + b) > c) && ((b + c) > a) && ((a + c) > b);
    printf("Do these sides verify triangle property ? 1 for Yes, 0 for No\nThe value for provided side length is %d.", t);
    return 0;
}
