// TestPerson.c

#include "Person.h" // include interface to Person module


int main(void){
	Person *p1 = new_Person("Jeff Jones", 23);
	Person *p2 = new_Person("Jon Lewis", 32);

	Person_printDetails(p1);
	Person_printDetails(p2);

	Person_setAge(p1, 101);

	//p1->age = 5; // attributes effectively hidden now, so can't do this
	//*(((int *) p1) + 2) = 5; // could still do this, but far less likely

	Person_printDetails(p1);

	Person_free(p2);
	p2 = p1;

	Person_printDetails(p1);
	Person_printDetails(p2);

	Person_free(p1);
	return 0;
}

