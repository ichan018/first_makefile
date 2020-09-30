proj: main.o
	g++ -o proj main.o

main.o: main.cpp evenNum.h
	g++ -c main.cpp evenNum.h
