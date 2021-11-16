//Declare grade of student. First(>59), Second(>49), Third(>39), Fail(<40), Subjects: phy,chem,maths,eng,bio
#include <stdio.h>
int main()
{
    int p, c, m, e, b, per;
    printf("Enter marks in Subjects: ");
    scanf("%d%d%d%d%d", &p, &c, &m, &e, &b);
    per = (int)(p + c + m + e + b) / 5 + 0.9;
    if (per >= 60)
    {
        printf("First Division");
    }
    else if (per >= 50)
    {
        printf("Second Division");
    }
    else if (per >= 40)
    {
        printf("Third Division");
    }
    else
    {
        printf("FAIL.");
    }
    return 0;
}
