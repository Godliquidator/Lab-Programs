// Ques:- Write a function which will take 2 integer values and return avg,max and min.
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>

void compare_num(int *a, int *b) //Declaring a function
{
    int max;
    max = (*a > *b) ? *a : *b; //Max finding condition.
    printf("Maximum number is %d.\n", max);

    int min;
    min = (*a < *b) ? *a : *b; //Min finding condition.
    printf("Minimum number is %d.\n", min);

    float avg;
    avg = ((*a) + (*b)) / 2.0; //Finding average.
    printf("Average of the two numbers is %0.2f.\n", avg);
}

int main()
{
    int a, b;
    printf("Enter 2 numbers:\n\n");
    printf("Enter mo. 1: ");
    scanf("%d", &a);
    printf("Enter no. 2: ");
    scanf("%d", &b);
    compare_num(&a, &b); //Calling a function.

    return 0;
}