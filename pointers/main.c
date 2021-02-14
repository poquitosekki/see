#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "helper.h"

int main(void) {
  int A[] = {11, 54, 35, 23, 10};
  char C[] = {'A', 'C', 'A', 'B'};
  char S[] = "Hello, World!";

  debug_char(C, LEN(C));

  return 0;
}
