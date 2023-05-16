#include <stdio.h>

int main(void) {
  // printf("Hello World\n");
  printf("C Constants:\n");

  const int MYNUM = 25;
  // MYNUM = 15;  // Error

  const int MINUTESPERHOUR = 60;
  const float PI = 3.14;

  printf("%d\n", MYNUM);
  printf("%d\n", MINUTESPERHOUR);
  printf("%0.2lf\n", PI);

  return 0;
}
