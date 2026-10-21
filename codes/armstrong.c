#include <stdio.h>
#include <math.h>

int main(void)
{
    int num = 153, sum = 0, temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit; // for 3-digit Armstrong
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is NOT an Armstrong number\n", num);
    return 0;
}
