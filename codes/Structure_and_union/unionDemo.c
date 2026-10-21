#include <stdio.h>

union StudentId
{
    int rollNo;
    int regdNo;
}asd;

struct Student
{
    union StudentId id;
    char name[30];
    float cgpa;
};

int main()
{
    int i;
    char choice;

    struct Student studs[3];
    printf("\n Student Information\n");
    printf("\n Student Information\n %ld", sizeof(i));

    printf("========================");

    for (i = 0; i < 3; i++)
    {
        printf("\n\nEnter Data for Student %d", i + 1);
        printf("\n-------------------------\n");
        printf("Id (You can enter Roll No. [Press 1] or Regd. No.[Press any other key]): ");
        scanf("%c", &choice);
        if (choice == '1')
        {
            printf("\n Roll number.: ");
            scanf("%d", &studs[i].id.rollNo);
        }
        else
        {
            printf("\n Redg.No: ");
            scanf("%d", &studs[i].id.regdNo);
        }
        printf("Name: ");
        scanf("%s", studs[i].name);
        printf("CGPA: ");
        scanf("%f", &studs[i].cgpa);
        printf("\nDetails of Student %d", i + 1);
        printf("\n--------------------");
        if (choice == '1')
        {
            printf("\nRoll No.: %d", studs[i].id.rollNo);
        }
        else
        {
            printf("\nRegd. No.: %d", studs[i].id.regdNo);
        }
        printf("\nName: %s", studs[i].name);
        printf("\nCGPA: %.2f", studs[i].cgpa);
    }
}
