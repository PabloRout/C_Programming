
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int regdNo;
    char name[30];
    float cgpa;
};

int main()
{
    struct Student s;
    printf("\nEnter the student\'s Regd. No., Name, and CGPA: ");
    scanf("%d %s %f", &s.regdNo, s.name, &s.cgpa);
    printf("\nStudent Details\n---------------");
    printf("\nRegd. No.: %d\nName: %s\nCGPA: %f\n", s.regdNo, s.name, s.cgpa);

    struct Student s1 = s;

    printf("\nStudent2 Details\n---------------");
    printf("\nRegd. No.: %d\nName: %s\nCGPA: %f\n", s1.regdNo, s1.name, s1.cgpa);

    return 0;
}