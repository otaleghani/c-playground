#include <stdio.h>
#include <math.h>

int main() {
  double diameter;
  printf("Gimme the circle diameter!\n");
  scanf("%lf", &diameter);
  
  printf("\nCirc: %8.2lf", diameter * M_PI);
  printf("\nArea: %8.2lf", diameter/2 * diameter/2 * M_PI);
}
