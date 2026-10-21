
#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 3
int main()
{
    int A[MAX_LENGTH][MAX_LENGTH];
    int B[MAX_LENGTH][MAX_LENGTH];
    int C[MAX_LENGTH][MAX_LENGTH];

    printf("Enter the values of A matrix: ");
    for (int i = 0; i < MAX_LENGTH; i++)
    {
        for (int j = 0; j < MAX_LENGTH; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the values of B matrix: ");
    for (int i = 0; i < MAX_LENGTH; i++)
    {
        for (int j = 0; j < MAX_LENGTH; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        for (int j = 0; j < MAX_LENGTH; j++)
        {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        for (int j = 0; j < MAX_LENGTH; j++)
        {
            for (int k = 0; k < MAX_LENGTH; k++)
            {
                C[i][k] += A[j][k] * B[k][i];
            }
        }
    }

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        for (int j = 0; j < MAX_LENGTH; j++)
        {
            printf(" %d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}