#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int x = 5, y = 3;
    swap(&x, &y);
    printf("x=%d\ty=%d", x, y);
}