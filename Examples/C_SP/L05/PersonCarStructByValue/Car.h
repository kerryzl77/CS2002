/*
 * Car.h
 *
 *  Created on: 14 Feb 2020
 *      Author: jonl
 */

#ifndef CAR_H
#define CAR_H

#define MAX_CAR_STRING_NAME 32

typedef struct Car {
	char name[MAX_CAR_STRING_NAME];
	char registration[MAX_CAR_STRING_NAME];
} Car;

Car new_Car(char *name, char *registration);
void Car_printDetails(Car this);

#endif /* CAR_H */
