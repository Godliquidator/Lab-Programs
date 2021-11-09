// WAP to give 60 mark grace if age is below 50 else give 40 marks grace
#include <stdio.h>
int main()
{
    int marks, age;
    printf("Enter the marks\n");
    scanf("%d", &marks);
    printf("Enter your age\n");
    scanf("%d", &age);
    marks = marks + 40;
    if (age < 50)
    {
        marks = marks + 20;
    }
    printf("Final Marks=%d", marks);
    return 0;
}
