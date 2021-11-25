#include <stdio.h>
int main()
{
    long int n, rev = 0, org;
    printf("Enter the number: ");
    scanf("%ld", &n);
    org = n;
    do
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    } while (n != 0);
    printf("The reverse of the number is %ld.\n", rev);
    if (org == rev)
    {
        printf("The given number is a palindrome.\n");
    }
    else
    {
        printf("The given number is not a palindrome.");
    }
    return 0;
}
