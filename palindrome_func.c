#include <stdio.h>
int isPalindrome(int n)
{
    int org, rem, rev = 0;
    org = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (rev == org)
        return 0;
    else
        return 1;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (isPalindrome(num) == 0)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}