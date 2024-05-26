#include <stdio.h>

int main()
{
  int x = 5;
  int y = 2;

  printf("Add: %d\n", x + y);
  printf("Sub: %d\n", x - y);
  printf("Mol: %d\n", x * y);
  printf("Div: %d\n", x / y); // Gives you a int, truncates the decimal
  float z = x / (float) y; 
  // To make it work, you have to do casting. Is like a type assertion in go

  printf("Div: %f\n", z);
  printf("Mod: %d\n", x % y); // Remainder
  printf("Increment: %d\n", x++);
  printf("Decrement: %d\n", x--);

  printf("Augmented assignment operator: %d\n", x+=2);

  return 0;
}
