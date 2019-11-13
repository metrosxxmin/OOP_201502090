
test	: test.o human.o student.o smart_obj.o shared_ref.o weak_pointer.o
	g++ -o test test.o human.o student.o smart_obj.o shared_ref.o weak_pointer.o
test.o	: test.cpp
	g++ -c -o test.o test.cpp
human.o	: human.cpp
	g++ -c -o human.o human.cpp
student.o	: student.cpp
	g++ -c -o student.o student.cpp
smart_obj.o	: smart_obj.cpp
	g++ -c -o smart_obj.o smart_obj.cpp
shared_ref.o: shared_ref.cpp
	g++ -c -o shared_ref.o shared_ref.cpp
weak_pointer.o: weak_pointer.cpp
	g++ -c -o weak_pointer.o weak_pointer.cpp
clean	:
	rm *.o test
