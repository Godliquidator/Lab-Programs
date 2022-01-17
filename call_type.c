// Ques:- What is call by value and what is call by reference(2 functions in a single program)
// Name- Isha Mishra
// Roll No- 21051568
// Batch- B14
#include <stdio.h>
void val_call(int a) //Declaring a function.
{
    a = a + 2;
    printf("Call by value  - sending the values of arguements...\n\n");
}

void ref_call(int *b) //Declaring a function.
{
    *b = *b + 2;
    printf("Call by reference - sending the address of arguements..\n\n");
}

int main()
{
    int n;
    printf("Enter a no.: ");
    scanf("%d", &n);

    val_call(n); //Calling a function.
    printf("The value after call by value operation is %d\n", n);

    ref_call(&n); //Calling a function.
    printf("The value after call by reference operation is %d\n", n);

    return 0;
}