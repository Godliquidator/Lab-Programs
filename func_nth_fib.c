// Ques:- Write a function which will return nth fibonacci number.
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>
void nth_fib(int n) //Declaring a function.
{
    int a, b, c;
    int i;

    a = 0, b = 1;

    for (i = 1; i <= (n - 2); i++) //For fibnoacci series
    {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d", c); //nth fibonacci number
}

int main()
{
    int n;
    printf("Enter the nth term you want to be displayed of Fibonacci Series:\n");
    scanf("%d", &n);

    printf("The %dth term of the fibonacci series is ", n);

    nth_fib(n);

    return 0;
}