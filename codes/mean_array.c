#include <stdio.h>

int main(void)
{
    int arr[] = {5, 10, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    float mean = (float)sum / n;
    printf("Mean: %.2f\n", mean);
    return 0;
}
