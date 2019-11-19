
test : main.o Integer.o Float.o Complex.o
	g++ -o test main.o Integer.o Float.o Complex.o

main.o	: main.cpp
	g++ -c -o main.o main.cpp
Integer.o	: Integer.cpp
	g++ -c -o Integer.o Integer.cpp
Float.o	:	Float.cpp
	g++ -c -o Float.o Float.cpp
Complex.o	: Complex.cpp
	g++ -c -o Complex.o Complex.cpp
clean	:
	rm *.o test
