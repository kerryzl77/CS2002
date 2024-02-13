/*
 * Example program which writes to an array out of bounds.
 * Writing to an array out of bounds can alter the content of
 * other variables in the running program depending on where
 * things are stored in memory.
 *
 * For example, when I compile below using gcc on palain.cs.st-andrews.ac.uk
 *   gcc -Wall -Wextra -O0 undefined_behaviour.c
 * I get
 *   x is 5
 * In other words, writing to the array has changed the value in x.
 *
 */
#include <stdio.h>

int main() {
    int array[5] = {0, 1, 2, 3, 4};
    int x = 101;

    array[7] = 5;
    printf("x is %d\n", x);
    return 0;
}
