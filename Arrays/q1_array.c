// Ques:- Take an array and display the whole array using pointer.
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
        printf("Enter value for element at %d position: ", i);
        scanf("%d", &arr[i]); //Storing Values.
    }

    int *b;      //Declaring a pointer variable.
    b = &arr[0]; //Storing Address in pointer variable.

    printf("The array is: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(b + i)); //Printing elements of array through pointer.
    }

    return 0;
}