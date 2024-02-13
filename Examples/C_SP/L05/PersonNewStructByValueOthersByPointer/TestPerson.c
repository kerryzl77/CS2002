// TestPerson.c

#include "Person.h" // include interface to Person module


int main() {
    Person p1 = new_Person("Jeff Jones", 23);
    Person p2 = new_Person("Jon Lewis", 99);
    Person_printDetails(&p1);
    Person_printDetails(&p2);

    Person_setAge(&p1, 101);
    Person_printDetails(&p1);

    return 0;
}

