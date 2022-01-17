// Ques:- Write the following series using factorial function.
// 1/1! + 2!/1 + 1/3! + 4!/1 +..........n terms
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>

int factorial(int n) //Declaring a function.
{
    int pr = 1;
    while (n >= 1)
    {
        pr = pr * n; //product for factorial.
        n--;
    }

    return pr; //returning value of factorial of given number.
}

int main()
{
    int n;
    float sum, odd, even;
    int fact;
    odd = 0;
    even = 0;
    printf("Enter number of terms for the series:\n1/1! + 2!/1 + 1/3! + 4!/1 +..........n terms:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 2)
    {
        fact = factorial(i);
        odd = odd + (1.0 / fact); //adding odd number of terms upto n.
    }

    for (int j = 2; j <= n; j = j + 2)
    {
        fact = factorial(j);
        even = even + (fact / 1); //adding even number of terms upto n.
    }

    sum = odd + even; //Total sum of the series.

    printf("The sum of the series 1/1! + 2!/1 + 1/3! + 4!/1 .... upto %d terms is %0.2f", n, sum); //Displaying the result.

    return 0;
}