#include <stdio.h>
#include <string.h>

#define ITEMS 5
#define MAXCHAR 20

int main()
{
    char names[ITEMS][MAXCHAR], temp[MAXCHAR];
    int i, j;

    printf("Enter %d names (up to %d characters each):\n", ITEMS, MAXCHAR - 1);
    for (i = 0; i < ITEMS; i++)
    {
        fgets(names[i], MAXCHAR, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
        if (strlen(names[i]) == 0)
        {
            printf("Empty name not allowed, try again.\n");
            i--;
        }
    }

    for (i = 0; i < ITEMS - 1; i++)
    {
        for (j = i + 1; j < ITEMS; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                // Swap names
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");
    for (i = 0; i < ITEMS; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}