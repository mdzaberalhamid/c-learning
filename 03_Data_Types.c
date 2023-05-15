#include <stdio.h>

int main(void) {
  // printf("Hello World\n");
  printf("\nC Data Types:\n");

  int i = 1993; // 2 or 4 bytes
  float f = 1.123;
  // 4 bytes
  // Upto 7 decimal values

  double d = 1.123456789012345;
  // 8 bytes
  // Upto 15 decimal values

  char c = 'Z';
  // 1 bytes

  printf("%d\n", i);
  printf("%f\n", f);
  printf("%lf\n", d);
  printf("%c\n", c);

  return 0;
}
