#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter the base number:\n");
    scanf("%d",&a);
    printf("Enter the power:\n");
    scanf("%d",&b);
    c=pow(a,b);
    printf("The value of a to the power b is %d\n",c);
    return 0;
}
