#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 205, b = 95, c = 102;
    a > b ? (a > c ? printf("a is biggest") : printf("c is biggest")) : b > c ? printf("b is biggest")
                                                                              : printf("C is biggest");
    return 0;
}