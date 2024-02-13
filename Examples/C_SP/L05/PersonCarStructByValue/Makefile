
TestPersonCar: TestPersonCar.o Person.o Car.o
	clang -Wall -Wextra TestPersonCar.o Person.o Car.o -o TestPersonCar

Person.o: Person.c Person.h
	clang -Wall -Wextra -c Person.c

Car.o: Car.c Car.h
	clang -Wall -Wextra -c Car.c


TestPersonCar.o: TestPersonCar.c Person.h Car.h
	clang -Wall -Wextra -c TestPersonCar.c

clean:
	rm TestPersonCar *.o
