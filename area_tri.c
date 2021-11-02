#include <stdio.h>
int main()
{
    float b,h,a;
    printf("Enter the base of triangle:\n");
    scanf("%f",&b);
    printf("Enter the height of triangle:\n");
    scanf("%f",&h);
    a=0.5*b*h;
    printf("The area of triangle is %f.",a);
    return 0;
}
