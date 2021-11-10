#include <stdio.h>
int main()
{
    float bs, gs;
    printf("Enter the basic salary in $:\n");
    scanf("%f", &bs);
    if (bs < 1500)
    {
        gs = bs + bs * 10 / 100 + bs * 40 / 100;
    }
    else
    {
        gs = bs + 500 + bs * 50 / 100;
    }
    printf("The gross salary is $ %0.2f\n", gs);
    return 0;
}
