#include <iostream>
using namespace std;

int main() {
  int a = 0;
  int *p = new int;
  *p = 10;
  printf("%p %d\n%p %d\n", &a, a, p, *p);
  delete p;
  p = new int[2];
  for (int i = 0; i < 2; i++) {
    *(p+i) = 100;
    printf("%p %d\n", p+i, *(p+i));
  }
  delete[] p;

  return 0;
}
