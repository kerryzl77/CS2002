// person.c
#include "Person.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Person _Person;

// this "private" struct logically extends the "public" one in Person.h and has the attributes at the end
struct _Person {
	Person_setAge_t setAge;
	Person_getAge_t getAge;
	Person_printDetails_t printDetails;
	Person_free_t free;
	char *name;
	int age;
};


// static ("private") functions not directly visible to code outside this file
// but can call them using the pointers to functions inside the Person struct.

static void setAge(Person *this, int age) {
    ((_Person*)this)->age = age;
}

static int getAge(Person *this) {
	return ((_Person*)this)->age;
}

static void printDetails(Person *this) {
    printf("Person (name = %s, age = %d)\n", ((_Person*) this)->name, ((_Person*)this)->age);
}

static void Person_free(Person *this) {
	free(((_Person*)this)->name);
	free(this);
}


// non-static ("public") constructor
Person *new_Person(const char *name, int age) {
    _Person *this = malloc(sizeof(_Person));
    this->name = strdup(name); // uses malloc internally
    this->age = age;
    this->setAge = setAge;
    this->getAge = getAge;
    this->printDetails = printDetails;
    this->free = Person_free;
    return (Person*) this;
}

