#include <stdio.h>

int main(void) {

  printf("C Programming Switch Case\n");

  int day = 3;

  switch (day) {

  case 1:
    printf("\nMonday");
    break;

  case 2:
    printf("\nTuesday");
    break;

  case 3:
    printf("\nWednesday");
    break;

  case 4:
    printf("\nThursday");
    break;

  case 5:
    printf("\nFriday");
    break;

  case 6:
    printf("\nSaturday");
    break;

  case 7:
    printf("\nSunday");
    break;

  default:
    printf("\nInvalid Input.");
  }

  return 0;
}
