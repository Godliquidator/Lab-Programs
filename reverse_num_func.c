#include <stdio.h>
reverse(int n)
{
    int r = 0;
    while (n != 0)
    {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }
    printf("Reverse of the number = %d\n", r);
}
int main()
{
    int n;
    printf("enter the number you want to revrse\n");
    scanf("%d", &n);
    reverse(n);
    return 0;
}