#include <stdio.h>

int main(void)
{
    int num = 29, i, flag = 1;
    if (num <= 1)
        flag = 0;
    for (i = 2; i <= num / 2 && flag; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    printf("%d is %s\n", num, flag ? "Prime" : "Not Prime");
    return 0;
}
