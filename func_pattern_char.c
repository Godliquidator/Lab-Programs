//Ques- Write a function which will take an integer and one character and display the following:-
// input is for eg: 3,=
// output:
// ===
// ==
// =
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>
void pattern(int x, char ch) //Declaring a function.
{
    printf("The output pattern is:\n");

    int i, j;

    for (i = x; i >= 1; i--) //loop for row iteration.
    {
        for (j = 1; j <= i; j++) //loop for column iteration.
        {
            printf("%c ", ch); //displaying the pattern.
        }

        printf("\n");
    }
}

int main()
{
    int n;
    char c;
    printf("Enter integer: ");
    scanf("%d", &n);
    printf("Enter character: ");
    scanf(" %c", &c); // Space before %c to avoid taking enter as input from previous scanf

    pattern(n, c);

    return 0;
}