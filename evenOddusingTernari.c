#include <stdio.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  // Check if the number is even or odd using the ternary operator
  int result = (num % 2 == 0) ? printf("%d is an even number", num) : printf("%d is an odd number", num);

  return 0;
}