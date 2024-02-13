#include <stdio.h>
// strings are just null-terminated char arrays
// compiler fills in size of ‘str’
char str[] = "hello world\n";

int main() {
  // can print as chars
  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c", str[i]);
  }
  // can print as string
  printf("%s", str);
}
