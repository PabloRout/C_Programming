#include <stdio.h>

int main(void)
{
    int num = 1234, sum = 0;
    int temp = num;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits of %d is %d\n", num, sum);
    return 0;
}
