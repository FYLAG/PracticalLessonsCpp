#include <iostream>

#define _MAX 100

int main(int argc, char const *argv[]) {

	char line[_MAX] = { 0 };

	std::cout << "Enter the string: ";

	std::cin.getline(line, _MAX);

	int count = 0;

	while (line[count] != 0) {

		count++;

	}

	std::cout << "Number of characters per string: " << count << std::endl;
	std::cout << "Reverse string: ";

	while (count > 0) {

		std::cout << line[count - 1];

		count--;

	}

	return 0;

}