// person.h
#ifndef PERSON_H // only if PERSON_H flag is not #defined
#define PERSON_H // #define the PERSON_H flag 

#define MAX_NAME_LEN 32

typedef struct Person {
	char name[MAX_NAME_LEN];
	int age;
} Person;


Person new_Person(char *name, int age);

Person Person_setAge(Person this, int age);

int Person_getAge(Person this);

void Person_printDetails(Person this);

#endif

