#include <stdio.h>

void display(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        printf("=");
        printf("\n");
    }
}

void main()
{
    int n;
    printf("enter the number of terms: ");
    scanf("%d", &n);
    display(n);
}