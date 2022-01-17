// Ques:- Pass two arrays to a function which will copy the data from the first array to second array. In main function display the second array(copied).
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>

void copy_arr(int *a, int n) //Decalring a variable.
{
    printf("Array entered is:\n");

    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i)); //Displaying the array.
    }

    int *b = a;

    int j;
    for (j = 0; j < n; j++)
    {
        *(b + j) = *(a + j); //Copying the elements i.e assigning them same value as of first array.
    }

    printf("\nThe second array(copied) is:\n");

    int k;
    for (k = 0; k < n; k++)
    {
        printf("%d ", *(b + k)); //Displaying the second(copied) array.
    }
}

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");

    int p[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("The element at %d position is: ", i);
        scanf("%d", &p[i]); //Storing values in array.
    }

    copy_arr(&p[0], n); //Calling a function.

    return 0;
}