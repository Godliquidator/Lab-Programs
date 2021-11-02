#include <stdio.h>
int main()
{
    float f,c,x,y;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f",&c);
    x=(c*9/5)+32;
    printf("The temperature in fahrenheit is %f\n",x);
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f",&f);
    y=(f-32)*5/9;
    printf("The temperature in celsius is %f\n",y);
    return 0;
}
