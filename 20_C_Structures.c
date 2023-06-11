#include <stdio.h>

struct myStructure {
  int num;
  char myChar;
  char myString[30];
};

int main(void) {

  printf("C Programming Structures:\n");
  printf("\nExample 1:\n");
  struct myStructure s;
  s.num = 25;
  s.myChar = 'Z';

  printf("%d\n", s.num);
  printf("%c\n", s.myChar);

  printf("\nExample 2:\n");
  struct myStructure s2;
  s2.num = 1;
  s2.myChar = 'M';

  printf("%d\n", s2.num);
  printf("%c\n", s2.myChar);

  printf("\nExample 3:\n");
  struct myStructure s3;

  strcpy(s3.myString, "Hello World!");
  printf("%s\n", s3.myString);

  return 0;
}
