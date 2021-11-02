#include <stdio.h>
int main()
{
    float m,y1,y2,x1,x2;
    printf("Enter the x co-ordintes, x1 and x2 respectively:\n");
    scanf("%f %f", &x1,&x2);
    printf("Enter the y co-ordintes, y1 and y2 respectively:\n");
    scanf("%f %f", &y1,&y2);
    m=(y2-y1)/(x2-x1);
    printf("The slope of line joining the given co-ordintes is %f.",m);
    return 0;
}
