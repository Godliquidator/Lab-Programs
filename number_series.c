//WAP to print natural numbers from 1 to 20.
#include <stdio.h>
int main()
{
    int i = 1;
    printf("Printing numbers from 1 to 20.......\n");
repeat:
    printf("%d \n", i);
    i++;
    if (i <= 20)
    {
        goto repeat;
    }
    return 0;
}
