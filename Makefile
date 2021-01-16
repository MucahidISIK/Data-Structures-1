derlecalistir:uygulama calistir

uygulama:LinkedList.o ListIterator.o Node.o Test.o
	g++ ./lib/LinkedList.o ./lib/ListIterator.o ./lib/Node.o ./lib/Test.o -o ./bin/uygulama

LinkedList.o:
	g++ -I "./include" -c ./src/LinkedList.cpp -o ./lib/LinkedList.o

ListIterator.o:
	g++ -I "./include" -c ./src/ListIterator.cpp -o ./lib/ListIterator.o	

Node.o:
	g++ -I "./include" -c ./src/Node.cpp -o ./lib/Node.o
	
Test.o:
	g++ -I "./include" -c ./src/Test.cpp -o ./lib/Test.o

calistir:
	./bin/uygulama.exe