#include <stdio.h>

int main(void) {

  // C If ... Else
  printf("\nC if...else\n");

  int x = 10, y = 8;
  if (x > y) {
    printf("x is greater than y.\n");
  } else if (x == y) {
    printf("x is equal to y.\n");
  } else {
    printf("x is smaller than y.\n");
  }

  // Short Hand If...Else (Ternary Operator)
  printf("\nShort Hand if...else\n");

  int time = 10;

  (time < 18) ? printf("Good day.") : printf("Good evening.");

  return 0;
}
