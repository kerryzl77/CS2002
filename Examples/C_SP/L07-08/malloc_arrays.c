// WARNING: This file (purposefully) has bugs! Look at the end!

#include <stdio.h>
#include <stdlib.h>

// Returns a new malloced array for n elements, initialised to value
int* newIntArray(int n, int value) {
	int* array = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		array[i] = value;
	}
	return array;
}

// Returns a new malloced pointer-to-pointer representation of 2-D array
// for n elements, initialised to value
int **new2DIntArray(int rows, int columns, int value) {
	int** array = malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; i++) {
		array[i] = newIntArray(columns, value);
	}
	return array;
}

void printArray(int *array, int size) {
	printf("[ ");
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("]\n");
}

void print2DArray(int **array, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		printArray(array[i], columns);
	}
}

void free2DArray(int **array, int rows) {
	for (int i = 0; i < rows; i++) {
		free(array[i]);
	}
	free(array);
}


int main(void) {
	int* myArray = newIntArray(10, -1);
	printArray(myArray, 10);
	free(myArray);

	int** my2DArray = new2DIntArray(5, 10, 3);
	print2DArray(my2DArray, 5,  10);
	free2DArray(my2DArray, 5);

    return 0;
}
