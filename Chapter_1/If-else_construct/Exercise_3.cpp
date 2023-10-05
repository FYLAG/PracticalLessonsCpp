#include <iostream>

int main(int argc, char const *argv[]) {

	int number = 0;

	std::cout << "Enter a number from 1 to 100: ";
	std::cin >> number;

	if (number >= 1 && number <= 100) {

		if (number > 50) {

			std::cout << "Number greater than 50." << std::endl;

		} else if (number < 50) {

			std::cout << "Number less than 50." << std::endl;

		} else {

			std::cout << "Number is 50." << std::endl;

		}

	} else {

		std::cout << "Error! The number is outside the range [1, 100]." << std::endl;

	}

	return 0;

}