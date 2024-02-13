#include <stdio.h>

int main() {
    int x = 1;
    int y = 100;
    int z = 255;

    printf("Dec = %i, Oct = %o, Hex = %x\n", x, x, x);
    printf("Dec = %i, Oct = %o, Hex = %x\n", y, y, y);
    printf("Dec = %i, Oct = %o, Hex = %x\n", z, z, z);

    float f = 0.5;

    printf("%g = %f = %e\n", f, f, f);

    float f2 = 1e20;

    printf("%g = %f = %e\n", f2, f2, f2);
    return 0;
}

