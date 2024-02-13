#include <stdio.h>

int main() {
  int i = 4, j = 6, *ip = &i;
  printf("i = %d @ %p, j = %d @ %p, ip = %p\n", i, &i, j, &j, ip);
  // i = 4 @ 0x7ffee0227a88, j = 6 @ 0x7ffee0227a84, ip = 0x7ffee0227a88

  *ip = 10;
  printf("i = %d, j = %d. *ip = %d, ip = %p\n", i, j, *ip, ip);
  // i = 10, j = 6. *ip = 10, ip = 0x7ffee0227a88

  ip = &j;
  printf("i = %d, j = %d. *ip = %d, ip = %p\n", i, j, *ip, ip);
  // i = 10, j = 6. *ip = 6, ip = 0x7ffee0227a84

  *ip = 20;
  printf("i = %d, j = %d. *ip = %d, ip = %p\n", i, j, *ip, ip);
  // i = 10, j = 20. *ip = 20, ip = 0x7ffee0227a84

  return 0;
}

