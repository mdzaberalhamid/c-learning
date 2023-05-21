#include <stdio.h>

int main(void) {

  printf("C Programming For Loop\n");
  
  printf("\nExample 1:\n");

  for (int i = 0; i < 5; i++) {
    printf("i = %d\n", i);
  }

  printf("\nExample 2:\n");

  for (int a = 0; a <= 10; a += 2) {
    printf("%d\t", a);
  }

  return 0;
}
