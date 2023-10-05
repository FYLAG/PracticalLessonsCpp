#include <iostream>

int main(int argc, char const *argv[]) {

	int numberFirst = 0, numberSecond = 0;

	std::cout << "Enter first number: ";
	std::cin >> numberFirst;

	std::cout << "Enter second number: ";
	std::cin >> numberSecond;

	std::cout << (
		numberFirst > numberSecond ? "The first number is greater than the second." : (
			numberFirst < numberSecond ? "The first number is less than the second." : "The numbers are equal."
		)
	) << std::endl;

	return 0;

}