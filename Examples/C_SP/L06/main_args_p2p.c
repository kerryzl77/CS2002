/*
 * main_args_p2p.c
 *
 */

#include <stdio.h>

int main (int argc, char **argv) {
	for(int i = 0; i < argc; i++)
		printf("arg %i is %s\n", i, *(argv+i) );
	return 0;
}

