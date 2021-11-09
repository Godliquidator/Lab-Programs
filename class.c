// WAP to print KIIT STUDENT if class is 1 to 12 else print KIIT UNIVERSITY STUDENT.
#include <stdio.h>
int main()
{
    int class;
    printf("Enter your class\n");
    scanf("%d", &class);
    printf("KIIT");
    if (class > 12)
    {
        printf("\nUNIVERSITY");
    }
    printf("\nSTUDENT");
    return 0;
}
