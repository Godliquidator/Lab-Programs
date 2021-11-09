//Take the time. Find the time which is earlier and find the difference between the two.
#include <stdio.h>
int main()
{
    int h1, m1, h2, m2, diffh, diffm;
    printf("Enter the following details in 24-hour clock format.\n");
    printf("Enter the hour value for first time.\n");
    scanf("%d", &h1);
    printf("Enter the minute value for first time.\n");
    scanf("%d", &m1);
    printf("Enter the hour value for first time.\n");
    scanf("%d", &h2);
    printf("Enter the minute value for second time.\n");
    scanf("%d", &m2);
    if (h1 > h2 && m1 > m2)
    {
        printf("Second time is earlier.\n");
        diffh = h1 - h2;
        diffm = m1 - m2;
        printf("The difference between time is %d hours %d minutes.\n", diffh, diffm);
    }
    else
    {
        printf("First time is earlier.\n");
        diffh = h2 - h1;
        diffm = m2 - m1;
        printf("The difference between time is %d hours %d minutes.\n", diffh, diffm);
    }
    return 0;
}
