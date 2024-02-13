
TestPersonStudent: TestPersonStudent.o Person.o Student.o
	clang -Wall -Wextra TestPersonStudent.o Person.o Student.o -o TestPersonStudent

Person.o: Person.c Person.h
	clang -Wall -Wextra -c Person.c

Student.o: Student.c Student.h
	clang -Wall -Wextra -c Student.c

TestPersonStudent.o: TestPersonStudent.c Person.h Student.h
	clang -Wall -Wextra -c TestPersonStudent.c

clean:
	rm TestPersonStudent *.o
