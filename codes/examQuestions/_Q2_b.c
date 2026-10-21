/* Write a program to find
 the sum of all prime numbers from 1 to n (taking n as user input). */

#include <stdio.h>
#include <stdlib.h>
// Q2.b
int main()
{
    int n;
    int add = 0;
    printf("enter a range: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d +", i);
            add += i;
        }
    }
    printf("= %d", add);

    return 0;
}