#include <stdio.h>

int main() {
  float fahrenheit, celsius;

  printf("Enter the temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;

  printf("The temperature in Celsius is: %f\n", celsius);

  printf("Enter the temperature in Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9 / 5) + 32;

  printf("The temperature in Fahrenheit is: %f\n", fahrenheit);

  return 0;
}