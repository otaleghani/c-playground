#include <stdio.h>
#include <stdbool.h>

int main() {
  // constants, read only variable
  const int ASD = 3;

  int x;          // declaration
  x = 123;        // initialization
  int y = 123;    // initialization

  int age = 21;             // int
  float gpa =  2.04;        // float 4 bytes (32 bits)
  char grade = 'C';         // char
  char name[] = "Bob";      // array of chars

  // different displays 
  printf("You are %d years old\n", age);
  printf("Your name is %s\n", name);
  printf("Your average grade is %c\n", grade);
  printf("Your gpa is %f\n", gpa);
  
  
  double g = 3.12312312312; // double
  bool b = true;
  char f = 100;
  printf("%0.15lf\n", g); // Long float, or double
  printf("%d\n", b); // Boolean, 1 = true, 0 = false
  printf("%d\n", f); // char can display 1 byte of numbers, from -128 to 128
  printf("%c\n", f); // you could print it as a char

  unsigned char q = 255; // doesnt store negative numbers, goes from 0 to 255 -> if you put more than this it will overflow to 0

  short int w = 99; // An int with only two bytes of memory %d
  unsigned short int e = 10;

  int r = 32767; // uses 4 bytes of memory, has over 2 billion 
  unsigned int t = 65635; // %u, instead of %d 
                                //
  long long int i = 32767; // 8 bytes | Fomat specified = %lld
  unsigned long long int u = 65635; // Fomat specified = %llu
  return 0;
}
