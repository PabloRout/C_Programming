#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the row and col");
    scanf("%d", &row);
    scanf("%d", &col);
    int arr[row][col];
    int transpose[col][row];
    printf("Enter the array elements:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Printing array: \n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    printf("Printing Transpose: \n");
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

