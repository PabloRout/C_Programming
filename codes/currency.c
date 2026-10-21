#include <stdio.h>
#include <stdlib.h>
// Q2 h
int main()
{
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    // 500
    printf("%d x 100 \n", amount / 100);
    amount %= 100;
    // 500
    printf("%d x 50 \n", amount / 50);
    amount %= 50;
    // 500
    printf("%d x 20 \n", amount / 20);
    amount %= 20;
    // 500
    printf("%d x 10 \n", amount / 10);
    amount %= 10;
    // 500
    printf("%d x 5 \n", amount / 5);
    amount %= 5;
    // 500
    printf("%d x 2 \n", amount / 2);
    amount %= 2;

    printf("%d x 1 \n", amount / 1);
    amount %= 1;
    return 0;
}
