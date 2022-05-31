#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  char *a[8] = {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete","Diez"};
  char *n[4] = {"Copa", "Espada", "Basto", "Oro"};
  for (int i = 0; i < 3; i++) {
    printf("%s de %s ", a[i], n[i]);
  }
  printf("\n");
  return 0;
}
