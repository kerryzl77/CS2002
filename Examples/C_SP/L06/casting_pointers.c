/*
 * casting_pointers.c
 *
 */

#include <stdio.h>

int main(void) {
	int array[3] = {1,2,3};
	char* ptr = array;
	ptr+= sizeof(int);
	printf("%d\n", ptr == array+1); // 1, i.e. true
}
