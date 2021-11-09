//Verify whether the entering date is valid or not.
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
    if (d1 > 1 && d1 < 31)
    {
        printf("Entered First date is valid.\n");
    }
    else if (d2 > 1 && d2 < 31)
    {
        printf("Second Date is valid.\n");
    }
    else if (m1 > 1 && m1 < 12)
    {
        printf("First month is valid.\n");
    }
    else if (m2 > 1 && m2 < 12)
    {
        printf("Second month is valid.");
    }
    else
    {
        printf("Date and Month is inavlid.\n");
    }
    return 0;
}