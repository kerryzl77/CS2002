
TestPerson: TestPerson.o Person.o
	clang -Wall -Wextra TestPerson.o Person.o -o TestPerson

Person.o: Person.c Person.h
	clang -Wall -Wextra -c Person.c


TestPerson.o: TestPerson.c Person.h
	clang -Wall -Wextra -c TestPerson.c

clean:
	rm TestPerson *.o
