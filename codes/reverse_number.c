#include <stdio.h>

int main(void)
{
    int num = 1234, rev = 0;
    int temp = num;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("Original: %d\nReversed: %d\n", num, rev);
    return 0;
}
