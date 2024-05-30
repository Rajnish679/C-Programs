#include <stdio.h>

int main() {
  
  float radius = 10.0;
  
  float area = 3.14159 * radius * radius;
  
  float perimeter = 2 * 3.14159 * radius;

  printf("Area of the circle: %f\n", area);
  printf("Perimeter of the circle: %f\n", perimeter);

  return 0;
}