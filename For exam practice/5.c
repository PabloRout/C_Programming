#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);
int main()
{
    int term;
    printf("Enter the terms");
    scanf("%d", &term);
    fibonacci(term);

    return 0;
}

int fibonacci(int n)
{
    printf("%d ", n);
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return (n - 1) + fibonacci(n - 2);
}