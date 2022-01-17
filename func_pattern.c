// Write a function to print the following pattern:-
// - - -
// - - -
// AB
// = = = = = =
// = = = = = =
// = = = = = =
// DF
// * *
// * *
// * *
// * *
// * *
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>
void pattern(int m, int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c ", c);
        }

        printf("\n");
    }
}

int main()
{
    pattern(3, 2, '-');
    printf("AB\n");
    pattern(6, 3, '=');
    printf("DF\n");
    pattern(2, 5, '*');

    return 0;
}