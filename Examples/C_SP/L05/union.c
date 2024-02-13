/*
 * union.c
 *
 *      Author: jonl
 */


#include <stdio.h>

union U {
	int i;
	double d;
};


int main(void) {
	union U u;  // u.i=?   u.d=?
	u.i = 1;    // u.i=1.  u.d=?
	printf("%d\n", u.i); // u.i=1.  u.d=?
	u.d = 2.0;  // u.i=?  u.d=2.0
	printf("%lf\n", u.d); // u.i=?  u.d=2.0
}
