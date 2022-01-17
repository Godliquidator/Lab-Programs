// Ques:- Write a function which takes 3 numbers and return the average of them.
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>

float avgnum(float sum) //Declaring a function.
{
    float avg = sum / 3; //finding average.
    return avg;          //return the average value.
}

float main()
{
    float n, res, sum = 0.0;
    int i;
    printf("Enter Three numbers:\n"); //Entering 3 numbers.
    for (i = 1; i <= 3; i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%f", &n); //input of number
        sum = sum + n;   //storing sum of numbers in variable.
    }
    res = avgnum(sum);                                                //Calling the function.
    printf("The average of the three numbers entered is %0.2f", res); //Displaying the average.
    return 0;
}