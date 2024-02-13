#include <stdio.h>

// Introduces bool, true and false
#include <stdbool.h>


int main() {

    // bool types have an integer value
    bool b = false;
    printf("b = false (and has the value %i)\n", (int) b);
    b = true;
    printf("b = true (and has the value %i)\n", (int) b);
    // We cannot do a loop over bools, but we can
    // initialise an int with true/false and can
    // compare ints with true and false
    for (int i = false; i < 5; i++) {
        printf("i = %d and ", i);
        if (i == true) printf( "i == true\n" );
        else if (i == false) printf("i == false\n");
        else printf("is neither true nor false\n");
    }

    // and any non-zero int value is treated as true when treated as a hoolean
    for (int i = -4; i < 5; i++) {
        printf("i = %d and ", i);
        if (i) printf( "is treated as true\n" );
        else if (!i) printf("is treated as false\n");
        else printf("is neither treated as true nor false\n");
    }


    printf("\n\n");

}
