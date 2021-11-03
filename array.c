#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int arrayvar[10];

  arrayvar[0] = 0;

  srand(time(NULL));

  int i;

  for (i = 1; i < 10; i++) {
    int x = rand();
    arrayvar[i] = x;
  }

  printf("arrayvar: {");
  for (i = 0; i < 10; i++) {
    printf("%d ", arrayvar[i]);
  }
  printf("}\n");

  int clonearray[10];

  int *ap = arrayvar;
  int *cp = clonearray;

  for (i = 0; i < 10; i++) {
    *(cp + i) = *(ap + 9 - i);
  }

  printf("clonearray: {");
  for (i = 0; i < 10; i++) {
    printf("%d ", *(cp + i));
  }
  printf("}\n");

  int clonearray2[10];
  //ap = arrayvar;
  int *cp2 = clonearray2;


  //ap[0] = 0;
  for (i = 0; i < 10; i++) {
    cp2[i] = ap[9-i];
  }

  printf("clonearray2: {");
  for (i = 0; i < 10; i++) {
    printf("%d ", cp2[i]);
  }
  printf("}\n");

  return 0;

}
