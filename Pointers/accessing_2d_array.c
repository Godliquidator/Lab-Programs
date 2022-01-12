#include <stdio.h>
void add(int a[3][4])
{
    int b[] = {0, 0, 0};
    int *pb = b, (*pa)[4] = a;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            pb[i] += pa[i][j];
        }
        printf("%d ", pb[i]);
    }
}
int main()
{
    int p[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter Element in row no. %d column no. %d\n", i, j);
            scanf("%d", &p[i][j]);
        }
    }
    add(p);
}