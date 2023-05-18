#include <stdio.h>

int main(void) {

  // C Operators
  printf("C Operators:\n");

  int sum = 100 + 50;
  int sum1 = sum + 200;
  int sum2 = sum + sum1;

  printf("%d\n", sum);
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("\n");

  // Arithmetic Operators
  printf("Arithmetic Operators:\n");

  int x = 10 % 4;
  int y = 9;
  ++y;

  printf("%d\t", x);
  printf("%d\t", y);
  printf("\n\n");

  // Assignment Operators
  printf("Assignment Operators:\n");

  int z = 20;
  z /= 4;
  int multiply = 7;
  multiply *= 2;

  printf("%d\t", z);
  printf("%d\t", multiply);
  printf("\n\n");

  // Comparison Operators
  printf("Comparison Operators:\n");
  int num1 = 9, num2 = 9;

  printf("%d\t", num1 < num2);
  printf("%d\t", num1 != num2);
  printf("%d\t", num1 == num2);
  printf("\n\n");

  // Logical Operators
  printf("Logical Operators:\n");
  int num3 = 5, num4 = 8;

  printf("%d\t", num3 == 5 && num4 == 8);
  printf("%d\n", num3 == 5 && num4 == 5);
  printf("%d\t", num3 == 5 || num4 == 7);
  printf("%d\n", num3 == 1 || num4 == 1);
  printf("%d\n", !(num3 == 5 && num4 == 8));
  printf("\n");

  // Sizeof Operator (Result in Bytes)
  printf("Sizeof Operator:\n");
  int myInt;
  int a = 10;
  float myFloat;
  double myDouble;
  char myChar = 'Z';

  printf("%lu bytes\n", sizeof(myInt));
  printf("%lu bytes\n", sizeof(a));
  printf("%lu bytes\n", sizeof(myFloat));
  printf("%lu bytes\n", sizeof(myDouble));
  printf("%lu bytes\n", sizeof(myChar));

  return 0;
}
