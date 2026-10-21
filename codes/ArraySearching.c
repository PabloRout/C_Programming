#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {12, 23, 45, 6, 7, 87, 85, 96, 34, 56745, 4567};
    int index;
    for (int i = 0; i < 11; i++)
    {
        if (arr[i] == 877)
        {
            index = i;
            printf("%d", index);
            return 0;
        }
    }
    printf("Not found !!");

    return 0;
}