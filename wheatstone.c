//WAP to display whether the wheatstone bridge is balanced or not, if not find out the value of the variable  to balance the bridge.
#include <stdio.h>
int main()
{
    float P, Q, R, S;
    printf("Enter the value of resistance P\n");
    scanf("%f", &P);
    printf("Enter the value of resistance Q\n");
    scanf("%f", &Q);
    printf("Enter the value of resistance R\n");
    scanf("%f", &R);
    printf("Enter the value of resistance S\n");
    scanf("%f", &S);
    if (P * S == R * Q)
    {
        printf("Balanced Wheatstone Bridge\n");
        return 0;
    }
    S = (R * Q) / P;
    printf("The value of S for balanced wheatstone bridge is %f", S);
    return 0;
}
