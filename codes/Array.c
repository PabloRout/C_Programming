#include<stdio.h>

int main(){

    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the number in index %d \n",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}