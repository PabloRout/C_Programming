#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("COPY.txt", "r");
    if (fs == NULL)
    {
        puts("CAN NOT OPEN SOURCE FILE");
        exit(1);
    }
    ft = fopen("PAEST.txt", "w");
    if (ft == NULL)
    {
        puts("CAN NOT OPEN TARGET FILE");
        fclose(fs);
        exit(2);
    }
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
        {
            break;
        }

        fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);

    return 0;
}