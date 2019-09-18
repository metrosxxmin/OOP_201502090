#include <iostream>

int main() {
	char * a = "ABC";
	char b[] = "ABC";

	a[0] = 'b';
	std::cout << a << '\n';
	std::cout << b << '\n';

	return 0;
}
