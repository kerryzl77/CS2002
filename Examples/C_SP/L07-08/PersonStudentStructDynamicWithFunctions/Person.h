// Person.h
#ifndef PERSON_H // only if PERSON_H flag is not #defined
#define PERSON_H // #define the PERSON_H flag 

typedef struct Person Person;
struct Person {
	char *name;         // Pointer to start of name string
	int age;
	void (*printDetails)(Person *);
	void (*free)(Person *);
	void (*free_attributes)(Person *);
};


Person* new_Person(const char *name, int age);

void init_Person(Person *this, const char *name, int age);

#endif

