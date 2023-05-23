#include <stdio.h>

int main(void) {

  printf("C Break and Continue\n");

  // Break
  printf("\nBreak:\n");
  for (int i = 1; i <= 5; i++) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }

  // Continue
  printf("\nContinue:\n");
  for (int j = 0; j < 7; j++) {

    if (j == 4) {
      continue;
    }
    // else if(j == 3){
    //   continue;
    // }
    printf("%d\t", j);
  }

  // Break/Continue In While Loop
  printf("\n\n");
  printf("Break/Continue In While Loop:\n");

  int k = 0;
  while (k < 8) {

    if (k == 3) {
      // break;
      k++;
      continue;
    }
    printf("%d\t", k);
    k++;
  }

  return 0;
}
