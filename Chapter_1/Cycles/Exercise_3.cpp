#include <iostream>

int main(int argc, char const *argv[]) {

	int sum = 0, count = 0;

	while (true) {

		int buffer = 0;

		std::cout << "Enter the number: ";
		std::cin >> buffer;

		sum += buffer;
		count++;

		char exit = 0;

		std::cout << "Press Y to calculate the sum: ";
		std::cin >> exit;

		if (exit == 'Y' || exit == 'y') {

			break;

		}

	}

	std::cout << "Result sum: " << sum << std::endl;
	std::cout << "Avg numbers: " << static_cast<float>(sum) / count << std::endl;

	return 0;

}