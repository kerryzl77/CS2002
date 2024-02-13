// WARNING: This file (purposefully) has bugs! Look at the end!

#include <stdio.h>
#include <stdlib.h>

void alterArray(int array[3][5], int row, int column, int val) {
	array[row][column] = val;
}

void alterArrayByPntr(int *array, int columns, int row, int column, int val) {
	array[row*columns + column] = val;
}


int main(void) {

	int array[3][5] = { {1, 2, 3, 4, 5} , 
	                    {6, 7, 8, 9, 10}, 
						{11, 12, 13, 14, 15} };

	int* p2array = (int *) array;

	alterArray(array, 2, 0, -1);
	alterArrayByPntr(p2array, 5, 1, 1, -1);

	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 5; column++) {
			printf("array[%d][%d] = %d (@%p)\n", row, column, array[row][column], &array[row][column]);
		}
	}

//	printf("array = %p, array[0] = %p, array[1] = %p, array[2] = %p\n", array, array[0], array[1], array[2]);
//
//	printf("p2array = %p, *(p2array + 0) = %p\n", p2array, *(p2array+0));
    return 0;
}
