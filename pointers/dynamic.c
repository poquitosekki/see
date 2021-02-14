#include <stdio.h>
#include <stdlib.h>

// Dynamic Memory allocation
// in C  : malloc, calloc, realloc, free
// in C++: new, delete

void debug(int* p) {
  printf("%p %d\n", p, *p);
}

int main(void) {
  int a = 1;
  int *p = malloc(sizeof(int));
  *p = 2;

  debug(&a);
  debug(p);
  free(p);

  return 0;
}
