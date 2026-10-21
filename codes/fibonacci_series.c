#include <stdio.h>

int main(void)
{
    int n = 8, a = 0, b = 1, c;
    if (n <= 0)
        return 0;
    if (n == 1)
    {
        printf("%d\n", a);
        return 0;
    }
    printf("Fibonacci series (%d terms): %d %d ", n, a, b);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
