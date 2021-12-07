#include <stdio.h>

void largest(int n)
{
    int i, max = 0, num;
    for (i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &num);
        if (num > max)
            max = num;
    }

    printf("The largest number is %d \n", max);
}

void leader(int n)
{
    int i, count = 0, max = 0, num;
    for (i = 0; i < n; i++)
    {
        printf("enter the element %d: ", i + 1);
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
            count++;
        }
    }
    printf("The number of leaders is: %d", count);
}

void main()
{

    int n;
    printf("enter the number of terms: ");
    scanf("%d", &n);

    printf("\nDisplaying the largest number\n");
    largest(n);

    printf("Displaying the number of leaders\n");
    leader(n);
}