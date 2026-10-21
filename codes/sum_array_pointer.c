#include <stdio.h>

// Function to compute sum of all elements in an array using pointer
int computeSum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = computeSum(arr, size);
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}