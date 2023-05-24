#include <stdio.h>

int main(void) {
  printf("C Programming Arrays\n");

  // C Arrays
  printf("C Arrays:\n");
  int numArray[] = {5, 10, 20, 40, 80, 160, 320, 640, 1280};

  // Print array element
  printf("\nPrint Array Element:");
  printf("\n%d", numArray[1]);
  printf("\n%d", numArray[7]);

  // Change array element
  printf("\n\nChange array element:");
  numArray[5] = 100;
  printf("\n%d", numArray[5]);
  printf("\n");

  // Loop through an array
  printf("\nLoop through an array:\n");
  int i;
  for (i = 0; i < 6; i++) {
    printf("%d\t", numArray[i]);
  }

  // Set array size
  printf("\n\nSet array size:");
  int numArray2[4];

  numArray2[0] = 1;
  numArray2[1] = 11;
  numArray2[2] = 111;
  numArray2[3] = 1111;
  // numArray2[4]=11111;

  printf("\n%d", numArray2[3]);
  // printf("\n%d", numArray2[4]);  // 0

  return 0;
}
