#include <stdio.h>

int main(void) {
  printf("C : Write to Files\n");

  // Write To a File
  FILE *fptr;
  // fptr = fopen("filename.txt","w");
  // fprintf(fptr, "Some text");
  // fclose(fptr);

  // Append Content To a File
  fptr = fopen("filename.txt", "a");
  fprintf(fptr, "\nAppends text new2.");
  fclose(fptr);

  return 0;
}