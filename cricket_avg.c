//Enter score of 10 cricket players and find the average score.
#include <stdio.h>
int main()
{
    int score, sum_score = 0, i = 1;
    float avg_score;
entry:
    printf("Enter the score of Player %d: ", i);
    scanf("%d", &score);
    sum_score += score;
    i++;
    if (i <= 10)
    {
        goto entry;
    }
    avg_score = sum_score / 10.0;
    printf("Total Score=%d and Average Score=%0.2f", sum_score, avg_score);
    return 0;
}
