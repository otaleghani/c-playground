#include <stdio.h>
#include <string.h>

int main() {
  int age;
  char name[25];


  printf("What's you name? ");
  fgets(name, 25, stdin); 
  name[strlen(name)-1] = '\0';
  // scanf doesn't get whitespaces, fgets yes
  // The 25 is the size of the input, if you go over the 25 it will overflow
  // Also to keep in mind that fgets puts a newline at the end, but you can manipulate that with string

  printf("How old are you? ");
  scanf("%d", &age);   
  // You use the format specifier to specify the data type

  printf("You are %d years old ", age);
  printf("and you name is %s", name);
}
