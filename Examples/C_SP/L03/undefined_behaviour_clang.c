/*
 * Example program which writes to an array out of bounds.
 * Writing to an array out of bounds can alter the content of
 * other variables in the running program depending on where
 * things are stored in memory.
 *
 * For example, when I compile below using clang on palain.cs.st-andrews.ac.uk
 *   clang -Wall -Wextra -O0 undefined_behaviour.c
 * I get
 *   x is 5
 * In other words, writing to the array has changed the value in x.
 *
 */
#include <stdio.h>

int main() {
    int x = 101;
    int array[5] = {0, 1, 2, 3, 4};

    array[6] = 5;
    printf("x is %d\n", x);
    return 0;
}
