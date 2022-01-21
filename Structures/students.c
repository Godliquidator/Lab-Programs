#include <stdio.h>

struct students

{

    int rn;

    char name[50];

    char gender;

    float marks;
};

int main()

{

    int n;

    printf("Enter the number of students:");

    scanf("%d", &n);

    struct students s[n];

    int i;

    for (i = 0; i < n; i++)

    {

        printf("\nEnter the roll no., name, gender and marks of the students:");

        scanf("%d %s %c %f", &s[i].rn, s[i].name, &s[i].gender, &s[i].marks);
    }

    for (i = 0; i < n; i++)

    {

        printf("\nStudent %d details:", i + 1);

        printf("\tRoll no.%d Name-%s Gender-%c Marks-%0.2f", s[i].rn, s[i].name, s[i].gender, s[i].marks);
    }

    return 0;
}