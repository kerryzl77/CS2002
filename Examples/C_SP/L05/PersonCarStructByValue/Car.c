/*
 * Car.c
 *
 *      Author: jonl
 */

#include "Car.h"

#include <stdio.h>
#include <string.h>

Car new_Car(char *name, char *registration) {
	Car this;
	strcpy(this.name, name);
	strcpy(this.registration, registration);
	return this;
}

void Car_printDetails(Car this) {
	printf("Car (%s, registration = %s)\n", this.name, this.registration);
}


