#include <stdio.h>

struct Car {
  char brand[20];
  char model;
  int year;
};

int main(void) {
  printf("C Programming Structures Real Examples:\n\n");

  struct Car car1 = {"Marcedes", 'X', 1993};
  struct Car car2 = {"Lamborgini", 'A', 2000};
  struct Car car3 = {"Nissan", 'N', 2005};

  printf("%s\t %c\t %d\n", car1.brand, car1.model, car1.year);
  printf("%s\t %c\t %d\n", car2.brand, car2.model, car2.year);
  printf("%s\t %c\t %d", car3.brand, car3.model, car3.year);

  return 0;
}
