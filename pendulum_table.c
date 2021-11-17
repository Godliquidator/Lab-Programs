#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 9.8
int main()
{
    int l;
    float t;
    printf("Length\t\tTime Period\n");
    for (l = 10; l <= 50; l = l + 10)
    {
        t = 2.0 * pi * sqrt(l / g);
        printf("%d\t\t%f\n", l, t);
    }

    return 0;
}
