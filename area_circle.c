#include <stdio.h>
#define pi 3.14
int main()
{
    float r,a;
    printf("Enter the radius of circle:\n");
    scanf("%f",&r);
    a=pi*r*r;
    printf("The area of circle is %f",a);
    return 0;
}
