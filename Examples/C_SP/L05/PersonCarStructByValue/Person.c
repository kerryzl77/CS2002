// person.c
#include "Person.h"

#include <stdio.h>
#include <string.h>

Person new_Person(char *name, int age, Car car) {
    Person this;
    strcpy(this.name, name);
    this.age = age;
    this.car = car;
    return this;
}

Person Person_setAge(Person this, int age) {
    this.age = age;
    return this;
}

int Person_getAge(Person this) {
	return this.age;
}

void Person_printDetails(Person this) {
    printf("Person\n\tname = %s\n\tage = %d\n\t", this.name, this.age);
    Car_printDetails(this.car);
}

