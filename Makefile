OBJECTS= Node.o Stack.o
CXXFLAGS=

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)


Stack.o: Stack.cpp Node.h

main.o: main.cpp Stack.h Stack.o Node.h

tests.o: tests.cpp Stack.h Node.h

Node.o: Node.cpp Node.h


clean:
	rm -f $(OBJECTS) tests.o
