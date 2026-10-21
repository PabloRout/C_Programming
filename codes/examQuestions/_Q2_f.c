// Write a program in C to reverse a string by using pointer.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev_string(char *str);

int main()
{
    char string[100] = "HELLO WORLD";
    // printf("Enter a string: \n");
    // scanf("%c", &string);
    printf("%s \n", string);
    rev_string(string);
    printf("%s \n", string);

    return 0;
}

void rev_string(char *str)
{
    char *start = str;
    char *end = str;
    if (str == NULL || *str == '\0')
    {
        return;
    }
    end = str + strlen(str) - 1;
    while (start < end)
    {
        char temp;
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}