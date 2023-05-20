#include <stdio.h>

int main(void) {

  printf("\nC Programming While Loop\n");

  int test = 0;

  while (test < 6) {
    printf("%d\n", test);
    test++;
  }

  printf("\n%d", test);

  test -= 5; // 1
  printf("\n\n");
  printf("Do While Loop\n");

  do {
    printf("%d\t", test);
    test++;
  } while (test < 11);

  return 0;
}
