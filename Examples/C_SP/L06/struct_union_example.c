/*
 * struct_union_example.c
 *
 */

#include <stdio.h>

enum tag { INT, DOUBLE } ;

typedef enum tag Tag ;

typedef union {
	int i;
	double d;
} value_t;

typedef struct Number {
	Tag tag ;
	value_t value;
} Number;

Number new_i( int i ) {
	// constructor for INT
	Number id;
	id.tag = INT;
	id.value.i = i;
	return id;
}

Number new_d( double d ) {
	// constructor for DOUBLE
	Number id; id.tag = DOUBLE;
	id.value.d = d;
	return id;
}

void printNumber( Number number ){
	switch (number.tag) {
	case INT:
		printf("Int\t %i\n", number.value.i);
		break;
	case DOUBLE:
		printf("Double\t %.14f\n", number.value.d);
		break;
	default:
		printf("print_id: unknown tag_t = %i\n", number.tag); }
}


int main () {
	Number id1, id2, id3;
	id1 = new_i(1);
	id2 = new_d(3.141592654);
	id3 = new_d(3);

	// abstraction: code doesn't care what is in id

	printNumber(id1);
	printNumber(id2);
	printNumber(id3);

	return 0;
}
