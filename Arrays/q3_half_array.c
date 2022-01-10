// Ques:- Take an array and take any two pointers,One pointer is pointing to the first element AND
// Second pointer pointing to the first element of the second half of the array.
// Name- Isha Mishra
// Roll No- 210501568
// Batch- B14
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the size of the array: "); //User input size of array.
    scanf("%d", &n);
    int arr[n]; //initializing the array.
    for (i = 0; i < n; i++)
    {
        int x;
        printf("Enter the value for element at %d position: ", i);
        scanf("%d", &x);
        arr[i] = x; //Storing values in the array.
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    int z = n / 2;
    int *b = &arr[0]; //creating pointer variable and assigning address.
    int *c = &arr[z]; //creating pointer variable and assigning address.
    printf("The array is: ");

    for (int i = 0; i < z; i++)
    {
        printf("%d---%d ", *(b + i), *(c + i)); //Display the elements of the array.
    }
    return 0;
}