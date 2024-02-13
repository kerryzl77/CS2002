// person.c
#include "Person.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;         // Pointer to start of name string
	int age;
};


Person *new_Person(const char *name, int age) {
	Person *this = malloc(sizeof(struct Person));
	this->name = strdup(name); // uses malloc internally
	this->age = age;
	return this;
}

void Person_setAge(Person *this, int age) {
	this->age = age;
}

int Person_getAge(Person *this) {
	return this->age;
}

void Person_printDetails(Person *this) {
	printf("Person (name = %s, age = %d)\n", this->name, this->age);
}

void Person_free(Person *this) {
	free(this->name);
	free(this);
}
