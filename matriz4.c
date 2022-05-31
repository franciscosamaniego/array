#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
int a[3][3];
for(int i = 0; i < 3; i++) {
  for(int j = 0; j < 3; j++){
    a[i][j] = rand() % 101;
    printf("%d ", a[i][j]);
  }
  printf("\n");
}
  return 0;
}
