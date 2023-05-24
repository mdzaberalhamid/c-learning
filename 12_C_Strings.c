#include <stdio.h>

int main(void) {
  printf("C Programming Strings\n");

  // C Strings
  printf("\nC Strings:\n");
  char greetings[] = "Hello World!";

  printf("%s\n", greetings);

  // Accessing char in a String
  printf("\nAccessing char in a String:\n");
  printf("%c\n", greetings[6]);

  // Modifying String
  printf("\nModifying String:\n");
  greetings[1] = 'E';
  greetings[2] = 'L';
  greetings[3] = 'L';
  greetings[4] = 'W';

  printf("%s\n", greetings);

  // Another Way Of Creating Strings
  printf("\nAnother Way Of Creating Strings:\n");
  char greet[] = {'H', 'i', ' ', 'Z', 'a', 'b', 'e', 'r', '!', '\0'};
  // \0 is null termininating character

  printf("%s\n", greet);

  // Size of the char array (string)
  printf("\nSize of the char array:\n");
  printf("%lu\n", sizeof(greet));

  return 0;
}
