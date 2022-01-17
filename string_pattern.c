// Ques:- Take a string and display in the following pattern (use pointer)
// Forward Pattern:
// ABCD
// BCD
// CD
// D
// Reverse Pattern:
// DCBA
// CBA
// BA
// A
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>
void strfun(char s[10])
{
    char t[10] = {0};

    //Finding the length of the string:

    int i;

    for (i = 0; i < 10; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }

        else
        {
            continue;
        }
    }

    for (int l = 0; l < i; l++)
    {
        t[l] = s[l];
    }

    // Forward pattern:
    printf("\nThe Forward Pattern is:\n");

    char *a;
    a = &t[0];

    int m, n, j, k;
    n = i;

    char *b = a;

    for (k = n; k >= 1; k--)
    {
        for (j = 0; j < k; j++)
        {
            printf("%c", *(b + j));
        }

        printf("\n");
        a = a + 1;
        b = a;
    }

    // Reversing the string:

    char temp;

    int p, q;

    for (p = 0, q = i - 1; p <= q; p++, q--)
    {
        temp = t[p];
        t[p] = t[q];
        t[q] = temp;
    }

    printf("\n"); // To separate the two patterns

    // Reverse pattern:

    printf("The Reversed Pattern is:\n");

    char *d = &t[0];

    int w, x, y, z;
    char *e = d;
    z = i;

    for (x = z; x >= 1; x--)
    {
        for (y = 0; y < x; y++)
        {
            printf("%c", *(e + y));
        }

        printf("\n");
        d = d + 1;
        e = d;
    }
}

int main()
{
    char str[10] = {0};
    printf("Enter a String(max length 10):\n");
    scanf("%s", str);

    strfun(str);

    return 0;
}