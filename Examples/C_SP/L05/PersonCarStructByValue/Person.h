// person.h
#ifndef PERSON_H // only if PERSON_H flag is not #defined
#define PERSON_H // #define the PERSON_H flag 

#include "Car.h"

#define MAX_NAME_LEN 32

typedef struct Person {
	char name[MAX_NAME_LEN];
	int age;
	Car car;
} Person;


Person new_Person(char *name, int age, Car car);

Person Person_setAge(Person this, int age);

int Person_getAge(Person this);

void Person_printDetails(Person this);

#endif

