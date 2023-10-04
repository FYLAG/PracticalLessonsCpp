#include <iostream>

int main(int argc, char const *argv[]) {

	int a, b;

	std::cout << "Enter first number:";
	std::cin >> a;

	std::cout << "Enter second number:";
	std::cin >> b;

	if (b != 0) {			// Checking the divisor for zero

		if (a % b == 0) {	// If there is a remainder after division

			std::cout << "First and second numbers devisible." << std::endl;

		} else {			// If there is no remainder after division

			std::cout << "First and second numbers not devisible." << std::endl;

		}

	} else {

		std::cout << "Error! Second number equal zero!" << std::endl;

	}

	return 0;

}