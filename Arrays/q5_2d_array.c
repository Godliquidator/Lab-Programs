// Ques:- Through a single pointer you display 2-d array in forward and backward manner.
// Name- Isha Mishra
// Roll No- 210501568
// Batch- B14
#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c], i, j; //declaring variables.

    //INPUT VALUES IN ARRAY.

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the element %d %d of array: ", i, j);
            scanf("%d", (*(arr + i) + j)); // (*(arr + i) + j is equivalent to &arr[i][j]
        }
    }

    //DISPLAYING THE ARRAY IN FORWARD MANNER.

    printf("THE 2-D ARRAY IN FORWARD MANNER IS:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", *(*(arr + i) + j)); // *(*(arr + i) + j) is equivalent to arr[i][j]
        }

        printf("\n");
    }

    //DISPLAYING THE ARRAY IN BACKWARD MANNER.

    printf("THE 2-D ARRAY IN BACKWARD MANNER IS:\n");
    for (i = r - 1; i >= 0; i--)
    {
        for (j = c - 1; j >= 0; j--)
        {
            printf("%d ", *(*(arr + i) + j)); // *(*(arr + i) + j) is equivalent to arr[i][j]
        }

        printf("\n");
    }
    return 0;
}