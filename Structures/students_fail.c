#include <stdio.h>
struct students
{
    float math, science, sst, hindi, comp;
    int roll;
    char name[20];
    char gender[10];
};
int main()
{
    int n;
    float marks = 0;
    printf("Enter the no. of students whose data you wish to enter\n");
    scanf("%d", &n);
    struct students s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name, gender, roll no. and marks of Maths,Science,SST,Hindi & Computer of Student no. %d\n", i + 1);
        scanf("%s%s%d%f%f%f%f%f", s[i].name, s[i].gender, &s[i].roll, &s[i].math, &s[i].science, &s[i].sst, &s[i].hindi, &s[i].comp);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent no.:%d\nName:%s\tGender:%s\tRoll no.:%d\tTotal Marks:%f\n", i + 1, s[i].name, s[i].gender, s[i].roll, s[i].math + s[i].science + s[i].sst + s[i].hindi + s[i].comp);
    }
}