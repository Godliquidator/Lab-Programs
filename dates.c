//Take two dates and find out which one is earlier.
#include <stdio.h>
int main()
{
    int d1, m1, y1, d2, m2, y2;
    printf("Enter the first date:\n");
    scanf("%d", &d1);
    printf("Enter the first month:\n");
    scanf("%d", &m1);
    printf("Enter the first year:\n");
    scanf("%d", &y1);
    printf("Enter the second date:\n");
    scanf("%d", &d2);
    printf("Enter the second month:\n");
    scanf("%d", &m2);
    printf("Enter the second year:\n");
    scanf("%d", &y2);
    printf("First date is: %d\\%d\\%d\n", d1, m1, y1);
    printf("Second date is: %d\\%d\\%d\n", d2, m2, y2);
    if (d1 < d2 && m1 < m2 && y1 < y2)
    {
        printf("First Date is earlier.\n");
    }
    else
    {
        printf("Second Date is earlier.\n");
    }
    return 0;
}
