#include <stdio.h>
int main()
{
    int a, b, i = 1, hcf;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF of given two nunbers is %d.", hcf);
    return 0;
}