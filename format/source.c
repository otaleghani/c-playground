#include <stdio.h>

int main() {
  // a format specifier % defines and formats a type of data
  //
  // %c = character
  // %d = int
  // %lld = long long int
  // %u = unsigned int
  // %f = float
  // %lf = double
  //
  // %.1 = decimal precision
  // %1 = minimum field width
  // %- = left align

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 12.29;

  int quan1 = 35;
  int quan2 = 3;
  int quan3 = 1;


  printf("Price: $%15.2f\t\t\tQuantity: %15d\n", item1, quan1);
  printf("Price: $%15.2f\t\t\tQuantity: %15d\n", item2, quan2);
  printf("Price: $%15.2f\t\t\tQuantity: %15d\n", item3, quan3);
}
