#include <stdio.h>
int main()
{
    int a, b, c, s, t;
    printf("Enter the value of side A:\n");
    scanf("%d", &a);
    printf("Enter the value of side B:\n");
    scanf("%d", &b);
    printf("Enter the value of side C:\n");
    scanf("%d", &c);
    t = ((a + b) > c) && ((b + c) > a) && ((a + c) > b);
    s = t * (a + b + c);
    printf("Do they satisfy the triangle property?\nDisplay 0 for NO and sum of given sides for YES.\nThe value is %d.", s);
    return 0;
}
