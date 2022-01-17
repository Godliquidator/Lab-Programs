// Ques:- Write a function to display fibonacci series.
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>

int fib(int i) //Declaring a function
{
    if (i == 0)
    {
        return 0;
    }
    else if (i == 1)
    {
        return 1;
    }
    else
        return (fib(i - 1) + fib(i - 2));
}
int main()
{
    int n, i;
    printf("Enter the no. of terms for fibonacci series :\n");
    scanf("%d", &n);
    printf("Fibonacci series of %d terms is : \n", n);
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d,", fib(i)); //Calling a function.
    }

    return 0;
}