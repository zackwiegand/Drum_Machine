all: test

test: test.o
	g++ -o test test.o

test.o: test.cpp
	g++ -c test.cpp

clean:
	rm -f *.o test