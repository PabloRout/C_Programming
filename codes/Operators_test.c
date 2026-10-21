#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 25;
  int b = 5;
  printf("Arithmetic operators");
  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  printf("a * b = %d\n", a * b);
  printf("a / b = %d\n", a / b);
  printf("a  b = %d\n", a % b);
  printf("+a = %d\n", +a);
  printf("-a = %d\n", -a);
  printf("a++ = %d\n", a++);
  printf("a-- = %d\n", a--);
  printf("Realational operators");
  printf("a < b  : %d\n", a < b);
  printf("a > b  : %d\n", a > b);
  printf("a <= b: %d\n", a <= b);
  printf("a >= b: %d\n", a >= b);
  printf("a == b: %d\n", a == b);
  printf("a != b : %d\n", a != b);

  printf("Logical operators");
  printf("a && b : %d\n", a && b);
  printf("a || b : %d\n", a || b);
  printf("!a: %d\n", !a);
  printf("bitwise operators");
  printf("a & b: %d\n", a & b);
  printf("a | b: %d\n", a | b);
  printf("a ^ b: %d\n", a ^ b);
  printf("~a: %d\n", ~a);
  printf("a >> b: %d\n", a >> b);
  printf("a << b: %d\n", a << b);

  return 0;
}
