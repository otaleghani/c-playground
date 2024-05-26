#include <stdio.h>
#include <math.h>
// math include a lot of different math operations

int main() {
  double A = sqrt(9);     // square root
  double B = pow(2, 4);   // power (2^4)
  int C = round(3.14);    // round
  int D = ceil(3.14);     // Round up
  int E = floor(3.14);    // Round down
  double F = fabs(-100);  // Absolute value (negative to positive)
  double G = log(3);      // logarithmic
  double H = sin(45);     // sine 
  double I = cos(45);     // cosine 
  double J = tan(45);     // tangent 
  
  printf("%lf", A);
  printf("\n%lf", B);
  printf("\n%d", C);
  printf("\n%d", D);
  printf("\n%d", E);
  printf("\n%lf", F);
  printf("\n%lf", G);
  printf("\n%lf", H);
  printf("\n%lf", I);
  printf("\n%lf", J);
}
