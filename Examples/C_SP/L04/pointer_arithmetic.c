#include <stdio.h>

void print_int_array(int* ip, int length) {
    printf("[ ");
    for (int i = 0; i < length; i++) {
        printf("%i ", ip[i]);
    }
    printf("]\n");
}

int main() {
  int array[] = { 1, 4, 9, 16 };
  int *ap = array;
  int i;
  for(i = 0; i < 4; i++ )
    *(ap + i) -= 1;
  print_int_array(ap, 4);
  return 0;
}
