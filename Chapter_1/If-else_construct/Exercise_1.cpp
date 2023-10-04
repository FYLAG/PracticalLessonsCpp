#include <iostream>

int main(int argc, char const *argv[]) {

	int a, b;

	std::cout << "Enter first number:";
	std::cin >> a;

	std::cout << "Enter second number:";
	std::cin >> b;

	if (a == b) {	// If the numbers are equal

		std::cout << "The entered numbers match" << std::endl;

	} else {		// If the numbers aren't equal

		std::cout << "The entered numbers don't match" << std::endl;

	}

	return 0;

}
