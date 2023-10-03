#include <iostream>

/*
	Program changing two numbers using bitwise operation.
*/

int main(int argc, char const *argv[]) {

	int a = 99, b = 66;

	std::cout << "a = " << a << "; b = " << b << std::endl;

	a ^= b; // Use bitwise exclusive
	b ^= a;
	a ^= b;

	std::cout << "a = " << a << "; b = " << b << std::endl;

	return 0;

}
