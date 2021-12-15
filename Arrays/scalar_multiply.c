#include <stdio.h>
int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, n, j, i;
    printf("The matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter a number to multiply it in the matrix\n");
    scanf("%d", &n);
    printf("The matrix after scalar multiplication is\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", n * a[i][j]);
        }
        printf("\n");
    }
}