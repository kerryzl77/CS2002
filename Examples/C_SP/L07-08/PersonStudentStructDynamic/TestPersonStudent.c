// TestPerson.c

#include "Person.h"  // include interface to Person module
#include "Student.h" // include interface to Student module

int main(void){
	Person *p = new_Person("Jeff Jones", 23);
	Student *s = new_Student("John Jones", 18, "Computer Science");
	Person_printDetails(p);
	Student_printDetails(s);

	Person_free(p);
	Student_free(s);
	return 0;
}

