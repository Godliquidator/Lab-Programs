#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of acceleration of the vehicle.\n");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("The vehicle is moving with constant velocity.\n");
    }
    else if (a > 0)
    {
        printf("The vehicle is moving with constant acceleration.\n");
    }
    else
    {
        printf("The vehicle is moving with constant decceleration.");
    }
    return 0;
}
