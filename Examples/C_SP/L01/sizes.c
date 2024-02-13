/*************************************************************
 *
 *  sizes.c
 *
 *  This is a simple program to illustrate the use of sizeof
 *  for different scalar types
 *
 *  (c) Jon Lewis, University of St Andrews, 5/2/06
 *
 *  Extended and made 64-bit safe by Chris Jefferson, 1/2/10
 *************************************************************/

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(){

  printf("sizeof(char)=%d\n", (int)sizeof(char));
  printf("sizeof(short)=%d\n", (int)sizeof(short));
  printf("sizeof(int)=%d\n", (int)sizeof(int));
  printf("sizeof(unsigned)=%d\n", (int)sizeof(unsigned));
  printf("sizeof(long)=%d\n", (int)sizeof(long));
  printf("sizeof(long long)=%d\n", (int)sizeof(long long));
  printf("sizeof(long long unsigned)=%d\n", (int)sizeof(long long unsigned));

  printf("sizeof(bool)=%d\n", (int)sizeof(bool));
  printf("sizeof(float)=%d\n", (int)sizeof(float));
  printf("sizeof(double)=%d\n", (int)sizeof(double));
  printf("sizeof(size_t)=%d\n", (int)sizeof(size_t));
}
