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

int main() {
	function_t f;
	f = add;
	printf("add(3,2)=%i\n", (*f)(3,2));
	f = mul;
	printf("mul(3,2)=%i\n", (*f)(3,2));
	return 0;
}
