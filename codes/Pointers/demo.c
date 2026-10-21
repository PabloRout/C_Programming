#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 3;
    int *j = &i;
    int **k = &j;
    printf("Address of i= %u \n", &i);
    printf("Address of i= %u \n", j);
    printf("Address of i= %u \n", *k);
    printf("Address of j= %u \n", &j);
    printf("Address of k= %u \n", k);
    printf("value of i= %d \n", *(&i));
    printf("value of i= %d \n", *j);
    printf("value of i= %d \n", **k);
    return 0;
}
