#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("Enter array size: ");
    x = scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}