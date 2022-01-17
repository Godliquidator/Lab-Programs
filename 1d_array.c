// Ques:- Write a function which will take a 1D array and display the array. The same function will also return the maximum element present in the array.
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>

void array_1d(int *x, int n) //Declaring a function.
{
    printf("The 1-D array is: ");

    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(x + i)); //Displaying the array.
    }

    int max = -1;

    int j;
    for (j = 0; j < n; j++)
    {
        if (*(x + j) > max) //Condition for max variable.
        {
            max = *(x + j); //Assigning value to max variable.
        }

        else
        {
            continue;
        }
    }

    printf("\nThe maximum element in given array is: %d", max); //Displaying max element.
}

int main()
{
    int n;
    printf("Enter the size of 1D array:\n");
    scanf("%d", &n);

    printf("Enter the elements of the 1D array:\n");

    int a[n];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element at %d position:", i);
        scanf("%d", &a[i]); //Storing values in array.
    }

    array_1d(&a[0], n); //Calling a function.

    return 0;
}