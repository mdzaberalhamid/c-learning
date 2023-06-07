#include <stdio.h>

int sum(int k);

int main(void) {

  printf("C Programming Recursion:\n");

  // Example
  printf("Example\n");

  int result = sum(10);
  printf("%d", result);

  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
