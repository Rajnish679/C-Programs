#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  // Check if n is a power of 2
  if ((n & (n - 1)) == 0) {
    printf("%d is a power of 2\n", n);
  } else {
    printf("%d is not a power of 2\n", n);
  }

  return 0;
}
