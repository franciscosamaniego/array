#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  char *cards[40] = {
    "Ancho de oro",
    "Dos de oro",
    "Tres de oro",
    "Cuatro de oro",
    "Cinco de oro",
    "Seis de oro",
    "Siete de oro",
    "Diez de oro",
    "Once de oro",
    "Doce de oro",
    "Ancho de Copa",
    "Dos de Copa",
    "Tres de Copa",
    "Cuatro de Copa",
    "Cinco de Copa",
    "Seis de Copa",
    "Siete de Copa",
    "Diez de Copa",
    "Once de Copa",
    "Doce de Copa",
    "Ancho de Basto",
    "Dos de Basto",
    "Tres de Basto",
    "Cuatro de Basto",
    "Cinco de Basto",
    "Seis de Basto",
    "Siete de Basto",
    "Diez de Basto",
    "Once de Basto",
    "Doce de Basto",
    "Ancho de Espada",
    "Dos de Espada",
    "Tres de Espada",
    "Cuatro de Espada",
    "Cinco de Espada",
    "Seis de Espada",
    "Siete de Espada",
    "Diez de Espada",
    "Once de Espada",
    "Doce de Espada",
  };
  for(int i = rand() % n; i <= n; i++) {
    printf("%s\n", cards[i]);
  }
  return 0;
}
