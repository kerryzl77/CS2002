// person.h
#ifndef PERSON_H // only if PERSON_H flag is not #defined
#define PERSON_H // #define the PERSON_H flag 


typedef struct Person {
	char *name;         // Pointer to start of name string
	int age;
} Person;


Person* new_Person(const char *name, int age);

void Person_setAge(Person *this, int age);

int Person_getAge(Person *this);

void Person_printDetails(Person *this);

void Person_free(Person *this);

#endif

