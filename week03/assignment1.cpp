#include <iostream>

void code() {}
static const int rodata = 0;
int data = 1;
int bss;

int main() {
	int* heap = new int[1];
	int stack = 1;

	std::cout << "Code\t : " << (void *) code << '\n';
	std::cout << "Rodata\t : " << &rodata << '\n';
	std::cout << "Data\t : " << &data << '\n';
	std::cout << "Bss\t : " << &bss << '\n';
	std::cout << "Heap\t : " << heap << '\n';
	std::cout << "Stack\t : " << &stack << '\n';

	return 0;
}
