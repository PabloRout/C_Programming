#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    printf("enter the range: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        int isPrime = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 1;
                break;
            }
        }
        if (!isPrime)
        {
            sum += i;
            printf(" %d ", i);
        }
    }
    printf("\n %d", sum);
    return 0;
}