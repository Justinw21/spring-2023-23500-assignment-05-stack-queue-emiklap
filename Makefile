OBJECTS=main.o Node.o Stack.o
CXXFLAGS=

main: $(OBJECTS)
	g++ -o main $(OBJECTS)

tests: tests.o OList.o Node.o
	g++ -o tests tests.o OList.o Node.o


Stack.o: Stack.cpp Node.h

main.o: main.cpp Stack.h Stack.o Node.h

tests.o: tests.cpp OList.h Node.h

Node.o: Node.cpp Node.h


clean:
	rm -f $(OBJECTS) tests.o
