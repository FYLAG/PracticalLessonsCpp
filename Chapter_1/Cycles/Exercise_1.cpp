#include <iostream>

int main(int argc, char const *argv[]) {

	int number;

	std::cout << "Enter the number: ";
	std::cin >> number;

	for (int i = 1; i <= number; i += 2) {

		std::cout << "Square number " << i << ": " << i * i << std::endl;

	}

	return 0;

}