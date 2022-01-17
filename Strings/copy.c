#include <stdio.h>
int main()
{
    char s1[50], s2[50];
    int i = -1;
    printf("Enter a string to copy it's content to another string\n");
    gets(s1);
    while (s2[++i] = s1[i])
        ;
    printf("The copied string is\n");
    puts(s2);
}