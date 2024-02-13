// person.c
#include "Person.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static ("private") functions not directly visible to code outside this file
// but can call them using the pointers to functions inside the struct.

static void Person_printDetails(Person *this) {
	printf("Person (name = %s, age = %d)\n", this->name, this->age);
}

static void Person_free_attributes(Person *this) {
	free(this->name);
}

static void Person_free(Person *this) {
	this->free_attributes(this);
	free(this);
}


Person *new_Person(const char *name, int age) {
	Person *this = malloc(sizeof(Person));
	init_Person(this, name, age);
	return this;
}


void init_Person(Person *this, const char *name, int age) {
	this->name = strdup(name); // uses malloc internally
	this->age = age;
	this->printDetails = Person_printDetails;
	this->free = Person_free;
	this->free_attributes = Person_free_attributes;
}


