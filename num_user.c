//WAP to print all number within a given range.
#include <stdio.h>
int main()
{
    int c, i = 1;
    printf("Enter the limit: ");
    scanf("%d", &c);
    printf("Displaying numbers from 1 to %d.....\n", c);
repeat:
    printf("%d \n", i);
    i++;
    if (i <= c)
    {
        goto repeat;
    }
    return 0;
}
