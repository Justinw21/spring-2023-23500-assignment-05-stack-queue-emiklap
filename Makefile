OBJECTS= Node.o Stack.o Queue.o
CXXFLAGS=

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)


Stack.o: Stack.cpp Node.h

Queue.o: Queue.cpp

main.o: main.cpp Stack.h Node.h Queue.h

tests.o: tests.cpp Stack.h Node.h Queue.h

Node.o: Node.cpp Node.h


clean:
	rm -f $(OBJECTS) tests.o
