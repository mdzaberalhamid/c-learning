#include <stdio.h>

int main(void) {
  printf("C Programming Pointers\n\n");

  // Creating Pointers
  // Example 1
  printf("Example 1:\n");
  int myAge = 43; // an int variable

  printf("%d\n", myAge);
  // Outputs the value of myAge (43)

  printf("%p\n\n", &myAge);
  // Outputs the memory address of myAge

  // Example 2
  printf("Example 2:\n");
  int myAge2 = 30;
  int *ptr = &myAge2;

  printf("%d\n", myAge2);
  printf("%p\n", &myAge2);
  printf("%p\n\n", ptr);

  // Dereference
  printf("Dereference:\n");
  int num1 = 17;
  int *num = &num1;

  printf("%p\n", num);
  printf("%d\n", *num); // Dereference

  return 0;
}
