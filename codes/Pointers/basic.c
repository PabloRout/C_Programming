#include <stdio.h>
#include <stdlib.h>
void printAge(int *pAge)
{
    printf("You re %d years old \n", *pAge);
}
int main()
{
    int age = 21;
    int *pAge = &age;
    // printf("address: %p\n", &age);
    // printf("value: %d\n", age);
    // printf("Adderss of pAge: %p\n", pAge);
    // printf("value of pAge: %d\n", *pAge); //dereferencing
    printAge(pAge);
    return 0;
}