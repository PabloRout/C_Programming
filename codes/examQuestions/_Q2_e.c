/*
Write a C program to multiply two matrices of dimension n x n and store the result in another
matrix.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the dimentation: \n");
    scanf("%d", &n);
    int MATRIX1[n][n];
    int MATRIX2[n][n];
    int RESULT[n][n];

    printf("Enter the first Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &MATRIX1[i][j]);
        }
    }

    printf("Enter the second Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &MATRIX2[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            RESULT[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                RESULT[i][j] += MATRIX1[i][k] * MATRIX2[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %4d ", RESULT[i][j]);
        }
        printf("\n");
    }

    return 0;
}