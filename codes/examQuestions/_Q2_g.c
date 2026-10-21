/*
Write a program in C to read a text file named input.txt consisting of meaningful sentences
(at least 1000 words). Count total number of words and display the most frequently occurred
word along with its count.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char word[20];
    
    char ch;
    int count = 0;

    f = fopen("input.txt", "r");
    while (1)
    {
        ch = fgetc(f);
        if (ch == EOF)
        {
            break;
        }
        if (ch == ' ')
        {
            count++;
            printf("\n");
        }
        printf("%c", ch);
    }
    printf("\n %d", count);
    return 0;
}