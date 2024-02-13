#include <stdio.h>

enum tag { R = 2, D, F, S = -6, L };

int main(void)
{
    enum tag t = R;

    printf("%d,%d,%d,%d,%d\n", R,D,F,S,L);
}
