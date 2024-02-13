/*
 * Student.c
 *
 */

#include "Student.h"
#include "Person.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Student* new_Student(const char *name, int age, const char *degree) {
	Student *this = malloc(sizeof(Student));
	init_Person((Person *) this, name, age); // akin to super(name, age) in Java
	init_Student(this, degree);
	return this;
}

void init_Student(Student *this, const char *degree) {
	this->degree = strdup(degree);
}

void Student_printDetails(Student *this) {
	Person_printDetails((Person *) this);  // akin to super.printDetails() in Java
	printf("is a student of %s\n", this->degree);
}

void Student_free(Student *this) {
	free(this->name);
	free(this->degree);
	free(this);
}
