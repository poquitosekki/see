#include <iostream>
using namespace std;

int* add(int *x, int *y) {
  int *p = new int;
  *p = *x + *y;
  return p;
}

int main(void) {
  cout << "hello world" << endl;

  int x = 10;
  int y = 20;
  int *z = add(&x, &y);
  printf("%p %d\n", z, *z);
  delete z;

  int size = 0;
  cout << "Select size of array: ";
  cin >> size;
  int *p = new int[size];
  for (int i = 0; i < size; i++) {
    p[i] = i+1; 
  }
  
  for (int i = 0; i < size; i++) {
    cout << p[i] << ' ';
  }
  cout << endl;
  delete[] p;

  return 0;
}
