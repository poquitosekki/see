#include <stdio.h>
#include <stdlib.h>

int* add(int* x, int* y) { 
  int* p = calloc(1, sizeof(int));
  *p = *x + *y;
  return p; 
}

int main(void) {
  int a = 10, b = 10;
  int* c = add(&a, &b);
  printf("%p %d\n", c, *c);
  free(c);
  return 0;
}
