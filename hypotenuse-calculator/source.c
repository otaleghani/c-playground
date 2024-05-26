#include <stdio.h>
#include <math.h>

int main() {
  double side1;
  double side2;
  double C;

  printf("Gimme side 1");
  scanf("%lf", &side1);
  printf("Gimme side 2");
  scanf("%lf", &side2);

  C = sqrt(side1*side1 + side2*side2);

  printf("Hypotenuse: %.2lf\n", C);
  return 0;
}
