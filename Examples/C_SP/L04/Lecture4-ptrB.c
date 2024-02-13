#include <stdio.h>

int main() {
  unsigned long i = 1, j = 0;
  unsigned long* ip = 0;

  printf("i = %lu @ %p\n", i, &i);
  printf("ip = %p, j = %lu (%p)\n", ip, j, (unsigned long *)j);
  // i = 1 @ 0x7ffee79865f0
  // ip = 0x0, j = 0 (0x0)

  j = (unsigned long) &i;  // store address of i in j using explicit cast
  printf("ip = %p, j = %lu (%p)\n", ip, j, (unsigned long *)j);
  // ip = 0x0, j = 140732783945200 (0x7ffee79865f0)

  ip = (unsigned long*) j; // store value in j in ip
  printf("ip = %p, j = %lu (%p)\n", ip, j, (unsigned long *)j);
  // ip = 0x7ffee79865f0, j = 140732783945200 (0x7ffee79865f0)

  *ip = 2; // set content of address ip
  printf("i is %lu @ %p\n", i, &i);
  // i is 2 @ 0x7ffee79865f0

  return 0;
}

