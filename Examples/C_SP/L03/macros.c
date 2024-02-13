#include <stdio.h>

// Bad example without parentheses
//#define double(X) X+X
//#define mult(X,Y) X*Y

// It should have been
#define double(X) ((X)+(X))
#define mult(X,Y) ((X)*(Y))

int main() {
	int i = 1, j = 2;

	printf("%d\n", 2 * double(i));
	printf("%d\n", mult(i + j, i - j));

	return 0;
}
