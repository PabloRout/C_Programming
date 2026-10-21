#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0, mode = arr[0];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }
    printf("Mode: %d (occurred %d times)\n", mode, maxCount);
    return 0;
}
