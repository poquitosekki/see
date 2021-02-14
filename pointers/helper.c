#include <stdio.h>

void iter_char(char *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%p | %c\n", array+i, *(array+i)); 
  }
}

void iter_int(int *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%p | %d\n", array+i, *(array+i)); 
  }
}

void print(char *string) {
  int i = 0;
  while (*(string+i) != '\0') {
    printf("%c", *(string+i));
    i++;
  }
  printf("\n");
}

void debug_int(int array[], int length) {
  for (int i = 0; i < length; i++) {
    printf("Address: %p | Value: %d\n", &array[i], array[i]);
  }
}

void debug_char(char array[], int length) {
  for (int i = 0; i < length; i++) {
    printf("Address: %p | Value: %c\n", &array[i], array[i]);
  }
}
