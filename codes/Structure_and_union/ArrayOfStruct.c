#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int redgNo;
    char name[30];
    int age;
    float cgpa;
} stud[4];

int main()
{
    int size = 4;
    printf("\nEnter the students data:");
    printf("\n--------------------------");
    for (int i = 0; i <= size - 1; i++)
    {
        printf("\nredgNo of %dth student: ", i + 1);
        scanf("%d", &stud[i].redgNo);
        printf("\nname: ");
        scanf("%s", &stud[i].name);
        printf("\nage: ");
        scanf("%d", &stud[i].age);
        printf("\ncgpa:");
        scanf("%f", &stud[i].cgpa);
    }
    printf(" \nthe students data:");
    printf("\n--------------------------");
    for (int i = 0; i <= size - 1; i++)
    {
        printf("\n Details of student %d \n ------------------", i + 1);
        printf("\nRegd. No.: %d\nName: %s\nCGPA: %.2f\n",
               stud[i].redgNo, stud[i].name, stud[i].cgpa);
    }

    return 0;
}