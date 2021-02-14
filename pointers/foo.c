#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char arg[][20] = {"hello, world", "supercr00se"};
  for (int i = 0; i < 2; i++) {
    int j = 0;
    while (arg[i][j] != '\0') {
      printf("%c ", arg[i][j]);
      j++;
    }
    printf("\n");
  }
  // printf("%d %s %s\n", argc, argv[0], argv[1]);

  return 0;
}
