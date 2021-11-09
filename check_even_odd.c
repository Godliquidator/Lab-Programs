//Display whether a number is even or odd.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Number is even.\n");
    }
    else
    {
        printf("Number is odd.");
    }
    return 0;
}
