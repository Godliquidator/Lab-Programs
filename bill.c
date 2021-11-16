#include <stdio.h>
int main()
{
    int p1, p2, p3, a1, a2, a3, ta, fa, d1, d2, d3, td;
    printf("Enter the price for item 1: ");
    scanf("%d", &p1);
    printf("Enter the price for item 2: ");
    scanf("%d", &p2);
    printf("Enter the price for item 3: ");
    scanf("%d", &p3);
    if (p1 > 3000)
    {
        d1 = 5;
        a1 = p1 - p1 * d1 / 100;
    }
    else if (p1 >= 2000 & p1 <= 3000)
    {
        d1 = 2;
        a1 = p1 - p1 * d1 / 100;
    }
    else
    {
        d1 = 0;
        a1 = p1 - p1 * d1 / 100;
    }
    if (p2 > 3000)
    {
        d2 = 5;
        a2 = p2 - p2 * d2 / 100;
    }
    else if (p2 >= 2000 & p2 <= 3000)
    {
        d2 = 2;
        a2 = p2 - p2 * d2 / 100;
    }
    else
    {
        d2 = 0;
        a2 = p2 - p2 * d2 / 100;
    }
    if (p3 > 3000)
    {
        d3 = 5;
        a3 = p3 - p3 * d3 / 100;
    }
    else if (p3 >= 2000 & p3 <= 3000)
    {
        d3 = 2;
        a3 = p3 - p3 * d3 / 100;
    }
    else
    {
        d3 = 0;
        a3 = p3 - p3 * d3 / 100;
    }
    ta = a1 + a2 + a3;
    if (ta >= 1000 & ta <= 3000)
    {
        td = 10;
        fa = ta - ta * td / 100;
    }
    else if (ta >= 3000 & ta <= 5000)
    {
        td = 20;
        fa = ta - ta * td / 100;
    }
    else if (ta > 5000)
    {
        td = 30;
        fa = ta - ta * td / 100;
    }
    else
    {
        td = 0;
        fa = ta - ta * td / 100;
    }
    printf("YOUR BILL IS SHOWN BELOW:\n");
    printf("S.No.\tItem Price\tDiscount\tAmount\n");
    printf("1.\t%d\t\t%d\t\t%d\n", p1, d1, a1);
    printf("2.\t%d\t\t%d\t\t%d\n", p2, d2, a2);
    printf("3.\t%d\t\t%d\t\t%d\n", p3, d3, a3);
    printf("Total Amount=%d\n", ta);
    printf("Discount applicable=%d percent\n", td);
    printf("Final Amount=%d.", fa);
    return 0;
}