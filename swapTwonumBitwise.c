#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  // Swap the numbers using bitwise XOR
  a ^= b;
  b ^= a;
  a ^= b;

  printf("The numbers after swapping are %d and %d\n", a, b);

  return 0;
}