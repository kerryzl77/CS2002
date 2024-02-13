// define_debug.c
#include <stdio.h>

#define DEBUG // comment out to disable DEBUG

int main() {
  int result = 0;
  // code here to compute/alter value of result
#ifdef DEBUG
   printf("DEBUG main.c: result = %i\n", result);
#endif
   return result;
}
