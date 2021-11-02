#include <stdio.h>
int main()
{
    int l,b,a;
    printf("Enter the length of rectangle:\n");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:\n");
    scanf("%d",&b);
    a=l*b;
    printf("The area rectangle is %d",a);
    return 0;
}