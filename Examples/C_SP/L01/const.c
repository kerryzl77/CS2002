#include <stdio.h>


int main() {
    const char cspace = ' ';


    // But %c makes the compile print cspace as a character, %d makes the compiler print it as an integer. On all computers you are likely to ever use, this value is 32. This is not required by the standard.
    printf("'%c' is %d\n", cspace, cspace);
    printf("'%c' is %d\n", 'a', 'a');
    return 0;
}

