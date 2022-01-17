#include <stdio.h>
int len(char *s)
{
    int i = -1;
    while (s[++i])
        ;
    return (i);
}
int main()
{
    char a[100], b[50];
    printf("Enter a sentence\n");
    gets(a);
    int j = -1;
    b[++j] = a[0];
    for (int i = 1; i <= len(a); i++)
    {
        if (a[i - 1] == ' ')
            b[++j] = a[i];
    }
    b[++j] = '\0';
    printf("The first letter of words of the entered earlier are %s", b);
}