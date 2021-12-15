#include <stdio.h>
int main()
{
    int a[20], i, s = 0, c = 0;
    for (i = 0; i < 20; i++)
    {
        printf("Enter the marks of student no:%d\n", i + 1);
        scanf("%d", &a[i]);
        s += a[i];
        if (a[i] >= 90)
            c++;
    }
    printf("The average marks is %f\nNo. of students scoring more than 90 is: %d\n", s / 20.0, c);
}