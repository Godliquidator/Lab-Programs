#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4, m1, m2, t;
    printf("Enter the co-orindates of first point of line 1.\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the co-orindates of second point of line 1.\n");
    scanf("%d%d", &y1, &y2);
    printf("Enter the co-orindates of first point of line 2.\n");
    scanf("%d%d", &x3, &y3);
    printf("Enter the co-orindates of second point of line 2.\n");
    scanf("%d%d", &x4, &y4);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y4 - y3) / (x4 - x3);
    t = m1 * m1 * -1;
    printf("Display 1 for perpendicular lines, 0 for non perpendicular lines.\nThe value is %d.", t);
    return 0;
}
