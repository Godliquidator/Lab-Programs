#include <stdio.h>
#define g 9.8
int main()
{
    float u, t, v, s;
    printf("Enter the value of initial velocity:\n");
    scanf("%f", &u);
    printf("Enter the value of time elapsed:\n");
    scanf("%f", &t);
    v = u + g * t;
    s = u * t + 0.5 * g * t * t;
    printf("The value of final velocity is %f.\n", v);
    printf("The value of distance covered is %f m.", s);
    return 0;
}
