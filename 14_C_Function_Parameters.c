#include <stdio.h>

// C Programming Function Parameters
void myFunction1(char name[]) { printf("Hello %s\n", name); }

void myFunction2(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int myFunction3(int a) { return a + 5; };

int main(void) {
  // C Programming Function Parameters
  printf("C Programming Function Parameters\n");

  // Parameters and Arguments
  printf("\nParameters and Arguments:\n");
  myFunction1("Zaber");
  myFunction1("Araf");
  myFunction1("Clapher");

  // Multiple Parameters
  printf("\nMultiple Parameters:\n");
  myFunction2("Mi", 3);
  myFunction2("Joe", 14);
  myFunction2("Barbie", 30);

  // Return Values
  printf("\nReturn Values:\n");
  printf("Return is %d\n", myFunction3(5));
  printf("Return is %d\n", myFunction3(45));
  printf("Return is %d\n", myFunction3(95));
  return 0;
}
