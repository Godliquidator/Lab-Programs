#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], m, n, i, j, k;
    printf("Input row size : ");
    scanf("%d", &m);
    printf("Enter column size : ");
    scanf("%d", &n);
    printf("Enter Matrix-A elements : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Matrix-B elements : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication Matrix is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}