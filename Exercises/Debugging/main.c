/*
 * This code is for the debug exercise
 */

#include <stdlib.h>
#include <stdio.h>

int sum(int x, int y, int *z) {
    char c = 4;
    return (x + y + *z);
}

int main(int argc, char *argv[]) {

    int i, j, k, *z;
    int result;
    *z = k;

    if (argc != 4) {
        printf("Please specify three integers as parameters.\n");
        exit(1);
    }

    i = atoi(argv[1]);
    j = atoi(argv[2]);
    k = atoi(argv[3]);
    k *= 2;

    result = sum(i, j, &k) + sum(i, j, z);
    printf("%i\n", result);
    return 0;
}

