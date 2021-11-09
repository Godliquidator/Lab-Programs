//WAP to program to read the character from user and test it whether it is a vowel, consonant, or not an character.
#include <stdio.h>

int main()
{
    char ch;
    int l, u;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);

    l = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    u = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (l || u)
    {
        printf("\n %c is a VOWEL.", ch);
        return 0;
    }
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("\n %c is a CONSONANT.", ch);
        return 0;
    }
    printf("It is not a character.");
    return 0;
}