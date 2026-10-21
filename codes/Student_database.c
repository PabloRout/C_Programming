#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks[3];
};

int main()
{
    struct Student students[2];

    for (int i = 0; i < 2; ++i)
    {
        printf("Enter name for student %d: ", i + 1);
        scanf(" %19[^\n]", students[i].name);

        printf("Enter age for %s: ", students[i].name);
        scanf("%d", &students[i].age);

        for (int j = 0; j < 3; ++j)
        {
            printf("Enter marks %d for %s: ", j + 1, students[i].name);
            scanf("%f", &students[i].marks[j]);
        }

        printf("\n");
    }

    printf("Student Records:\n");
    for (int i = 0; i < 2; ++i)
    {
        float total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        float avg = total / 3.0f;

        printf("Student %d:\n", i + 1);
        printf("  Name   : %s\n", students[i].name);
        printf("  Age    : %d\n", students[i].age);
        printf("  Marks  : %.2f, %.2f, %.2f\n", students[i].marks[0], students[i].marks[1], students[i].marks[2]);
        printf("  Total  : %.2f\n", total);
        printf("  Average: %.2f\n\n", avg);
    }

    return 0;
}