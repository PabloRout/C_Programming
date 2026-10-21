#include <stdio.h>

int main(void)
{
    int num = 7;
    printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");
    return 0;
}
