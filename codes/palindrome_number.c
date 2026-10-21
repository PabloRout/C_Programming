#include <stdio.h>

int main(void)
{
    int num = 121, rev = 0, temp = num;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("%d is %s\n", num, (rev == num) ? "Palindrome" : "Not Palindrome");
    return 0;
}
