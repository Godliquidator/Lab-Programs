// Ques:- Take an array and display the whole array in the reverse order using pointer.
// Name- Isha Mishra
// Roll No- 210501568
// Batch- B14
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the size of array: "); //USER INPUT SIZE OF ARRAY.
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) //Loop for entering element in array.
    {
        printf("Enter value for element at %d position:", i);
        scanf("%d", &arr[i]); //storing values in array at respective position.
    }

    int *b;          //declare a pointer variable.
    b = &arr[n - 1]; //Storing address in pointer variable.

    printf("The array in reverse is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(b - i)); //displaying array elements in reverse order.
    }

    return 0;
}