.SUFFIXES: .cpp .o

test	: main.o vehicle.o car.o bike.o
	g++ -o test main.o vehicle.o car.o bike.o
main.o	: main.cpp
	g++ -c -o main.o main.cpp
vehicle.o	: vehicle.cpp
	g++ -c -o vehicle.o vehicle.cpp
car.o	: car.cpp
	g++ -c -o car.o car.cpp
bike.o	: bike.cpp
	g++ -c -o bike.o bike.cpp
clean	:
	rm *.o test
