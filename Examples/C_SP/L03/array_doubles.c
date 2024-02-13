#include <stdio.h>

int main() {
    int doubles[10];
    doubles[0] = 1;
    for (int i = 1; i < 10; i++) doubles[i] = 2 * doubles[i - 1];
    for (int i = 0; i < 10; i++) printf("2^%i = %i\n", i, doubles[i]);
}
