// Ques:- Write a function which will take a 2D array and display the array. The same function will also return the maximum element present in the array.
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>

void array_2d(int *a, int x, int y) //Declaring a variable.
{
    printf("\nThe entered 2d array is:\n");

    int m;
    for (m = 1; m <= (x * y); m++)
    {
        printf("%d\t", a[m - 1]); //Displaying 2d array.

        if (m % y == 0)
        {
            printf("\n"); //moving to next line as the row ends.
        }
    }

    int max = -1;

    int n;
    for (n = 0; n < (x * y); n++)
    {
        if (a[n] > max)
        {
            max = a[n]; //assinging max variable.
        }

        else
        {
            continue;
        }
    }

    printf("\nThe maximum value in whole array is %d.", max); //Displaying the max variable.
}

int main()
{
    int r, c, o;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    printf("Enter the number of columns:\n");
    scanf("%d", &c);

    int arr[r][c];
    int i, j;

    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the element at %d %d position:", i, j);
            scanf("%d", &arr[i][j]); //storing elements in 2d array.
        }
    }

    array_2d(&arr[0][0], r, c); //Calling a function.

    return 0;
}