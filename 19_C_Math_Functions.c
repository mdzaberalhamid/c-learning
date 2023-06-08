#include <math.h>
#include <stdio.h>

int main(void) {
  printf("C Math Functions:\n");

  // Square Root
  printf("\nSquare Root\n");
  printf("%0.2f\n", sqrt(81));

  // Round a Number
  printf("\nRound a Number\n");
  printf("%f\n", ceil(1.6));
  printf("%f\n", floor(1.6));

  // Power
  printf("\nPower\n");
  printf("%f\n", pow(5, 3));

  return 0;
}
