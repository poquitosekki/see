#include <stdio.h>

int add(int x, int y) {
  return x + y;
}

int main(void) {
  // pointer to function
  int (*ptr)(int, int);
  ptr = &add;
  int total = (*ptr)(1,1);
  printf("%p %d\n", ptr, total); 

  return 0;
}
