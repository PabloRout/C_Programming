#include <stdio.h>

int main() {
    printf("Prime numbers from 1 to 100:\n");
    
    for (int num = 2; num <= 200; num++) {
        int isPrime = 1; 
        for (int i = 2; i < num/2; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }   
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}