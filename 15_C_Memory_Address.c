#include <stdio.h>

int main(void) {

  printf("C Programming Memory Address\n\n");

  // Memory Address
  int myAge = 30;
  int num = 1;

  // printf("%d\n", myAge);
  printf("%p\n", &myAge);

  // %p used for pointer
  // &myAge is a pointer
  // A pointer stores the memory address of a variable as its value.

  printf("%p\n", &num);

  return 0;
}
