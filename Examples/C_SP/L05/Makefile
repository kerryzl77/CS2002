CC=clang
GFLAGS=-Wall -Wextra
CFLAGS=$(GFLAGS) -c
RM=rm

all: TryLine TryPoint union

TryLine: TryLine.o Line.o Point.o
	$(CC) $(GFLAGS) -o TryLine TryLine.o Line.o Point.o

TryPoint: TryPoint.o Point.o
	$(CC) $(GFLAGS) -o TryPoint TryPoint.o Point.o


TryLine.o: TryLine.c Line.h Point.h
	$(CC) $(CFLAGS) TryLine.c

TryPoint.o: TryPoint.c Point.h
	$(CC) $(CFLAGS) TryPoint.c

Line.o: Line.c Line.h
	$(CC) $(CFLAGS) Line.c

Point.o: Point.c Point.h
	$(CC) $(CFLAGS) Point.c

union.o: union.c
	$(CC) $(CFLAGS) union.c

union: union.o
	$(CC) $(GFLAGS) -o union union.o

clean:
	$(RM) *.o TryLine TryPoint union