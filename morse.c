#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *morse[] = {
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "...."
};
int c = 1;
while(c < argc){
  int i = 0;
  while(argv[c][i] != 0){
  printf("%s ", morse[argv[c][i] - 'a']);
  i++;
}
printf("\\");
c++;
}
printf("\n");
//for(int j = 0; j < i; j++) {
  //printf("%c ", argv[1][j]);
//}
  //printf("\n");
return 0;
}
