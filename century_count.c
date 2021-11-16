//Enter the score of 10 cricket players and count the number of players scored century.Discard -ve score if user enter by mistake.
#include <stdio.h>
int main()
{
    int score, i = 1, count = 0;
entry:
    printf("Enter the score of Player %d: ", i);
    scanf("%d", &score);
    if (score < 0)
    {
        printf("You have entered a negative score. Please Try Again.\n");
        goto entry;
    }
    else if (score >= 100)
    {
        count++;
    }
    i++;
    if (i <= 10)
    {
        goto entry;
    }
    printf("Total number of players made century is %d", count);
    return 0;
}
