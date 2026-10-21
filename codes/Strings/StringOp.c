#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    int len;

    len = strlen(str1);
    printf("Length of str1: %d\n", len);

    strcpy(str3, str1);
    printf("Copied str1 to str3: %s\n", str3);

    char str4[100];
    strncpy(str4, str1, 5);
    str4[5] = '\0'; 
    printf("Safely copied first 5 chars of str1 to str4: %s\n", str4);

    strcat(str1, str2);
    printf("Concatenated str1 and str2: %s\n", str1);

    int cmp = strcmp(str3, str2);
    if (cmp == 0) {
        printf("str3 and str2 are equal\n");
    } else if (cmp < 0) {
        printf("str3 is less than str2\n");
    } else {
        printf("str3 is greater than str2\n");
    }

    int cmp_partial = strncmp(str3, "Hel", 3);
    printf("Partial comparison (first 3 chars): %d\n", cmp_partial);

    char *substr = strstr(str1, "World");
    if (substr != NULL) {
        printf("Found 'World' in str1 at position: %ld\n", substr - str1);
    } else {
        printf("'World' not found in str1\n");
    }

    int i, j;
    char temp;
    for (i = 0, j = strlen(str3) - 1; i < j; i++, j--) {
        temp = str3[i];
        str3[i] = str3[j];
        str3[j] = temp;
    }
    printf("Reversed str3: %s\n", str3);

    return 0;
}