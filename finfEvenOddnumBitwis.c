#include <stdio.h>

int main() {
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);

  if (number & 1) {
    printf("The number is odd.\n");
  } else {
    printf("The number is even.\n");
  }

  return 0;
}