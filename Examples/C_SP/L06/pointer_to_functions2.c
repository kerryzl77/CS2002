/*
 * pointer_to_functions.c
 *
 */

#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int mul(int x, int y) {
	return x * y;
}

typedef int(*function_t)(int, int);

int callFunction(function_t f, int i, int j) {
	return (*f)(i, j);
}

int main() {
	printf("add(3,2)=%i\n", callFunction(add, 3, 2));
	printf("mul(3,2)=%i\n", callFunction(mul, 3, 2));
	return 0;
}
