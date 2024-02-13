#include <stdio.h>

//                   int ip[] is OK too
void init_int_array (int* ip, int length) {
    for (int i = 0; i < length; i++) {
      ip[i] = i;
    }
}

void print_int_array(int* ip, int length) {
    printf("[ ");
    for (int i = 0; i < length; i++) {
        printf("%i ", ip[i]);
    }
    printf("]\n");
}

int main() {
  int ibuf1[10], ibuf2[5];
  init_int_array(&ibuf1[0], 10);
  init_int_array(ibuf2, 5);

  print_int_array(ibuf1, 10);
  print_int_array(ibuf2, 5);
  return 0;
}
