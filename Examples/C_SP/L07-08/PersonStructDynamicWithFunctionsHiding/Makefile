CC = clang
TestPerson: TestPerson.o Person.o
	$(CC) -Wall -Wextra TestPerson.o Person.o -o TestPerson

Person.o: Person.c Person.h
	$(CC) -Wall -Wextra -c Person.c

TestPerson.o: TestPerson.c Person.h
	$(CC) -Wall -Wextra -c TestPerson.c

clean:
	rm TestPerson *.o
