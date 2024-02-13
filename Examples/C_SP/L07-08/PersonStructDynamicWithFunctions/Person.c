// person.c
#include "Person.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static ("private") functions not directly visible to code outside this file
// but can call them using the pointers to functions inside the Person struct.

static void setAge(Person *this, int age) {
    this->age = age;
}

static int getAge(Person *this) {
	return this->age;
}

static void printDetails(Person *this) {
    printf("Person (name = %s, age = %d)\n", this->name, this->age);
}

static void Person_free(Person *this) {
	free(this->name);
	free(this);
}


// non-static ("public") constructor
Person *new_Person(const char *name, int age) {
    Person *this = malloc(sizeof(Person));
    this->name = strdup(name); // uses malloc internally
    this->age = age;
    this->setAge = setAge;
    this->getAge = getAge;
    this->printDetails = printDetails;
    this->free = Person_free;
    return this;
}

