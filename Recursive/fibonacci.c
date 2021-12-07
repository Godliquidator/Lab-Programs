#include <stdio.h>

int fibo(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

void main()
{

    int n;
    printf("enter the range: ");
    scanf("%d", &n);
    int term = fibo(n);
    printf("\nThe %dth fibonacci term is %d", n, term);
}