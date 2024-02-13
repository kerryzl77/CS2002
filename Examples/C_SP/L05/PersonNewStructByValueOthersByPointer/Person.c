// person.c
#include "Person.h"

#include <stdio.h>
#include <string.h>

Person new_Person(char *name, int age) {
    Person this;
    strcpy(this.name, name);
    this.age = age;
    return this;
}

void Person_setAge(Person* this, int age) {
    this->age = age;
}

int Person_getAge(Person* this) {
	return this->age;
}

void Person_printDetails(Person* this) {
    printf("Person (name = %s, age = %d)\n", this->name, this->age);
}

