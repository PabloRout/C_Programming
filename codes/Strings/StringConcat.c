#include <stdio.h>
#include <string.h>

int main()
{

    char str1[20];
    char str2[30];
    printf("Enter the first word: ");
    scanf("%s", str1);
    printf("Enter the first word: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("Concatinated string %s", str1);
    return 0;
}