#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 9.8
int main()
{
    float l, t;
    printf("Enter the value of length of pendulum.\n");
    scanf("%f", &l);
    t = 2 * pi * sqrt(l / g);
    printf("The time period of given pendulum is: %f.", t);
    return 0;
}
