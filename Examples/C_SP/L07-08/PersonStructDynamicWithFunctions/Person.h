// person.h
#ifndef PERSON_H // only if PERSON_H flag is not #defined
#define PERSON_H // #define the PERSON_H flag 

typedef struct Person Person;

typedef void (*Person_setAge_t)(Person *, int);
typedef int (*Person_getAge_t)(Person *);
typedef void (*Person_printDetails_t)(Person *);
typedef void (*Person_free_t)(Person *);

struct Person {
	char *name;
	int age;
	Person_setAge_t setAge;
	Person_getAge_t getAge;
	Person_printDetails_t printDetails;
	Person_free_t free;
};


// non-static ("public") Person functions directly callable by code in other modules
Person* new_Person(const char *name, int age);

#endif

