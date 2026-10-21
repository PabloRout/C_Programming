#include<stdio.h> 

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main(){
  int a,b,c;
  printf("Enter two numbers: ");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("addition of two numbers %d and %d is %d",a,b,add(a,b));
  printf("subtraction of two numbers %d and %d is %d",a,b,sub(a,b));
  printf("multiplication of two numbers %d and %d is %d",a,b,mul(a,b));
  printf("division of two numbers %d and % %d is %d",a,b,div(a,b));
  return 0; 
}

int add(int a,int b){
  return a+b;
}
int sub(int a,int b){
  return a-b;
}
int mul(int a,int b){
  return a*b;
}
int div(int a,int b){
  return a/b;
}
