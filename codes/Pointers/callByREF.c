
#include <stdio.h>
#include <stdlib.h>
void swapv(int *, int *);
int main()
{
    int a = 10;
    int b = 20;
    swapv(&a, &b);
    printf("a=%d,b=%d\n", a, b);
    return 0;
}

void swapv(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("x=%d y=%d\n", *x, *y);
}