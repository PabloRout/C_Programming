#include <stdio.h>
#include <string.h>

#define ITEMS 5
#define MAXCHAR 20

int main() {
    char string[ITEMS][MAXCHAR], dummy[MAXCHAR];
    int i, j;

    printf("Enter %d names:\n", ITEMS);
    for(i = 0; i < ITEMS; i++) {
        scanf("%s", string[i]);
    }

    for(i = 0; i < ITEMS - 1; i++) {
        for(j = i + 1; j < ITEMS; j++) {
            if(strcmp(string[i], string[j]) > 0) {
                strcpy(dummy, string[i]);
                strcpy(string[i], string[j]);
                strcpy(string[j], dummy);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");
    for(i = 0; i < ITEMS; i++) {
        printf("%s\n", string[i]);
    }

    return 0;
}
