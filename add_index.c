//  Ques:- Take array (of numbers)
//  >Take function, input index value, add value of chosen index to each element of array (except chosen index)
//  >display new array
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>

void add_index(int *a, int n, int b) //Decalring a variable.
{
    printf("The Array entered is :\n");

    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i)); //Displaying the array.
    }

    int c = *(a + b); //new element after adding index.

    int j;
    for (j = 0; j < n; j++)
    {
        if (j == b)
        {
            *(a + j) = *(a + j); //keeping the respective index that same
        }

        else
        {
            *(a + j) = *(a + j) + c; //adding the index element in array elements.
        }
    }

    printf("\nArray after adding given index element in whole array except the index element is:\n");

    int k;
    for (k = 0; k < n; k++)
    {
        printf("%d ", *(a + k)); //Displaying the new array
    }
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");

    int arr[n];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("The element at %d position is:", i);
        scanf("%d", &arr[i]); //Storing the values in array.
    }

    int in;
    printf("Enter the desired index value:\n");
    scanf("%d", &in); //User inputs index.

    add_index(&arr[0], i, in); //Calling a function.

    return 0;
}