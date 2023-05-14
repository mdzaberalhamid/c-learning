#include <stdio.h>

int main(void) {

  // Variables
  printf("\nVariables\n");

  int myNum = 15;
  // int myNum;
  // myNum = 10;
  float myFloat = 3.43;
  char myNameChar = 'Z';

  printf("%d", myNum);
  printf("\n%f", myFloat);
  printf("\nMy name first letter is: %c\n", myNameChar);

  // Multiple Variables
  printf("\nMultiple Variables\n");

  int x, y, z;
  x = 3, y = 4, z = 13;

  printf("%d", x + y + z);

  return 0;
}
