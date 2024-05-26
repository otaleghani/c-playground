#include <stdio.h>

int main(){
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  if(age >= 18){
    printf("\nYou are signed up");
  } else if (age < 0) {
    printf("\nYou are not born");
  } else {
    printf("\nYou are not legal.");
  }
  return 0;
}
