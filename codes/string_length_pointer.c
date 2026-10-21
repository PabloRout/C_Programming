#include <stdio.h>

// Function to determine the length of a character string using pointer
int stringLength(const char *str)
{
    const char *ptr = str;
    while (*ptr != '\0')
    {
        ptr++;
    }
    return ptr - str;
}

int main()
{
    char str[] = "Hello, World!";

    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}