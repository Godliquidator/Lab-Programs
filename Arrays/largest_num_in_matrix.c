#include <stdio.h>
int main()
{
    int a[5][5], i, j, m;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter the value for row no %d column no%d\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix entered by you is\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    m = a[0][0];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (m < a[i][j])
                m = a[i][j];
        }
    }
    printf("The largest no. in that matrix is %d", m);
    return 0;
}