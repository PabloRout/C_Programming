#include<stdio.h>
#include<stdlib.h>

int main(){
  int Number;
  printf("enter the number to find: \n");
  scanf("%d",&Number);
  for (int i = 2; i < Number; i++)
  {
    if (Number % i==0)
    {
        printf("The number is not Prime");
        return 0;
    }
  }
  printf("The number is prime");
  return 0;
}
