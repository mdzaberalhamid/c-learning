#include <stdio.h>

// Function declaration
int myFunction(int a, int b);

// The main method
int main() {
  printf("C Programming Function Declaration and Definition:\n");
  printf("Example\n");

  int result = myFunction(6, 9); // call the function

  printf("%d\n", result);
  return 0;
}

// Function definition
int myFunction(int a, int b) { return a + b; }
