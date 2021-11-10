#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3, m1, m2, m3;
    printf("Enter the co-ordinates of first point:\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the co-ordinates of second point:\n");
    scanf("%d%d", &x2, &y2);
    printf("Enter the co-ordinates of third point:\n");
    scanf("%d%d", &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    m3 = (y1 - y3) / (x1 - x3);
    if (m1 != m2 && m2 != m3 && m3 != m1)
    {
        printf("These three points form a triangle.\n");
    }
    else
    {
        printf("These points do not form a triangle.");
    }
    return 0;
}
