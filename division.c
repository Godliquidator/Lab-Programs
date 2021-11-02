#include <stdio.h>
int main()
{
    int a,b,q,r;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("The quotient is %d\n",q);
    printf("The remainder is %d",r);
    return 0;
}
