#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
int a[3][3];
for(int i = 0; i < 3; i++) {
  for(int j = 0; j < 3; j++){
    int m = rand() % 101;
    printf("%d ", m);
  }
  printf("\n");
}
  return 0;
}
