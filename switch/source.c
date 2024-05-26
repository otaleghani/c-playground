#include <stdio.h>

int main(){
  char grade;
  printf("Enter grade: ");
  scanf("%c", &grade);

  switch(grade) {
    case 'A':
      printf("A");
      break;
    case 'B':
      printf("B");
      break;
    case 'C':
      printf("C");
      break;
    case 'D':
      printf("D");
      break;
    case 'F':
      printf("F");
      break;
    default:
      printf("Enter something else");
      break;
  }

  return 0;

}
