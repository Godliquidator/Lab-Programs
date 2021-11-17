#include <stdio.h>
int main()
{
    int i, j;
    printf("Numbers from 1 to 9 are:\n");
    for (i = 1; i < 10; i++)
    {
        printf("%d\n", i);
    }
    printf("Numbers from 9 to 1 are:\n");
    for (j = 9; j > 0; j--)
    {
        printf("%d\n", j);
    }

    return 0;
}
