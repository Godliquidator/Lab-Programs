#include <stdio.h>

int main()
{
    int i, j, k, arr1[10][10], row[10], col[10], n;

    printf("\n\nFind the sum of rows an columns of a Matrix:\n");
    printf("Input the size of the square matrix : ");
    scanf("%d", &n);
    printf("Input elements in the first matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d", arr1[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        row[i] = 0;
        for (j = 0; j < n; j++)
            row[i] = row[i] + arr1[i][j];
    }
    for (i = 0; i < n; i++)
    {
        col[i] = 0;
        for (j = 0; j < n; j++)
            col[i] = col[i] + arr1[j][i];
    }

    printf("The sum of rows and columns of the matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
        printf("\t%d", row[i]);
        printf("\n\n");
    }
    printf("\n");
    for (j = 0; j < n; j++)
    {
        printf("%d\t", col[j]);
    }
    printf("\n\n");
}