/*
 * Student.c
 *
 */

#include "Student.h"
#include "Person.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static ("private") functions not directly visible to code outside this file
// but can call them using the pointers to functions inside the struct.

static void Student_printDetails(Student *this) {
	this->super_printDetails(this); // akin to super.printDetails() in Java
	printf("is a student of %s\n", this->degree);

}

static void Student_free_attributes(Student *this) {
	free(this->degree);
}

static void Student_free(Student *this) {
	this->super_free_attributes(this);
	this->free_attributes(this);
	free(this);
}



Student *new_Student(const char *name, int age, const char *degree) {
	Student *this = malloc(sizeof(Student));
	init_Student(this, name, age, degree);
	return this;
}


void init_Student(Student *this, const char *name, int age, const char *degree) {
	init_Person((Person *) this, name, age); // akin to super(name, age) in Java
	this->degree = strdup(degree);
	this->printDetails = Student_printDetails;
	this->free = Student_free;
	this->free_attributes = Student_free_attributes;
}

