#include <stdio.h>

char convert(char chr)
{
    if (chr >= 97 && chr <= 122)
        return (chr - 32);
    else
        return (chr);
}
void main()
{
    char ch, newCh;
    printf("Enter the character to convert to uppercase: ");
    scanf("%c", &ch);
    newCh = convert(ch);
    printf("The uppercase character is : %c", newCh);
}