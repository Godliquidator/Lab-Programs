//WAP to convert the entered alphabet in uppercase if user entered in lowercase, else display appropriate message.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        printf("Uppercase of entered alphabet is %c\n", ch);
        return 0;
    }
    printf("The alphabet entered is already in Uppercase.");
    return 0;
}
