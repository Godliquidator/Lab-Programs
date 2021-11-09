//WAP to check whether the entered year is leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year.\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("Entered year is a leap year.\n");
        return 0;
    }
    printf("Entered year is not a leap year");
    return 0;
}
