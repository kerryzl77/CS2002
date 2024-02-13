// TestPerson.c

#include "Car.h" // include interface to Car module
#include "Person.h" // include interface to Person module


int main() {
    Car c1 = new_Car("Mercedes 300D", "C408DAS");
    Car c2 = new_Car("BMW M1", "A101YES");

    Person p1 = new_Person("Jeff Jones", 23, c1);
    Person p2 = new_Person("Jon Lewis", 99, c2);
    Person_printDetails(p1);
    Person_printDetails(p2);

    c1 = c2;

    Person_printDetails(p1);
    Person_printDetails(p2);


    p1 = Person_setAge(p1, 101);
    Person_printDetails(p1);

    p2 = p1;
    Person_printDetails(p1);
    Person_printDetails(p2);

    return 0;
}

