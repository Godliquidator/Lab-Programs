#include <stdio.h>
int len(char *s1)
{
    int i = -1;
    while (s1[++i])
        ;
    return (i);
}
int compare(char *s1, char *s2)
{
    int j = 0;
    int i = -1;
    while (s1[++i] == s2[i])
        ;
    return (s1[i] == s2[i] ? -1 : i);
}
int main()
{
    char s1[50], s2[50];
    printf("Enter 1st string\n");
    gets(s1);
    printf("Enter 2nd string\n");
    gets(s2);
    printf("-1 is displayed for matching strings and the position of the mismatch is displayed for mismatched strings\n");
    printf("%d", compare(s1, s2));
}