#include <stdio.h>
void display(int a, char chr)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        printf("%c", chr);
        printf("\n");
    }
}
void main()
{
    int n;
    char ch;
    printf("Enter the number of terms and character: ");
    scanf("%d %c", &n, &ch);
    display(n, ch);
}