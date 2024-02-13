// TestPerson.c

#include "Person.h" // include interface to Person module


int main(void){
    Person *p1 = new_Person("Jeff Jones", 23);
    p1->printDetails(p1);

    p1->setAge(p1, 101);

	// p1->age = 5; // attributes effectively hidden now, so can't do this
	*(((int *) p1) + 10) = 5; // could still do this, but far less likely

	p1->printDetails(p1);

    p1->free(p1);
    return 0;
}

