#include <iostream>

int main(int argc, char const *argv[]) {

	unsigned int length = 0;
	char enter = 0;

	std::cout << "Enter a line ending with a dot: ";

	do {

		length++;

		std::cin >> enter;

	} while (enter != '.');

	length--;

	std::cout << "The entered string consisted of " << length << " characters" << std::endl;

	return 0;

}